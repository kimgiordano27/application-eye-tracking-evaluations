/*
FUNCTION_NAME: OVRPlugin.Ktx$$GetKtxTextureHeight
ENTRY_POINT: 051600cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Ktx__GetKtxTextureHeight(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  lVar2 = FUN_0515ff88();
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x30) == 0) {
      return;
    }
    if (unaff_x20 != 0) {
      if (*(int *)(unaff_x20 + 0x18) != 0) {
        plVar3 = (long *)FUN_03aac1c4();
        if (plVar3 == (long *)0x0) goto LAB_051601c8;
        lVar2 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067823f0) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0516015c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02d9a5d4(plVar3,*(long *)PTR_DAT_067823f0,0);
LAB_0516015c:
        iVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
        if (iVar1 == 0x11) {
          return;
        }
      }
      lVar2 = FUN_0515ff88();
      if (lVar2 != 0) {
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
        uVar5 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06782410);
        FUN_0515fd94(uVar5,uVar8);
        FUN_03aad168();
        return;
      }
    }
  }
LAB_051601c8:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


