/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerEnd
ENTRY_POINT: 090c7280
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerEnd(long param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  uint local_4c;
  float local_48;
  float local_44;
  
  if ((DAT_0b3304c5 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac75cb8);
    DAT_0b3304c5 = 1;
  }
  puVar2 = PTR_DAT_0ac75cb8;
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0ac75cb8) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 6) * 0x10 + 0x138);
          goto LAB_090c7314;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_04980e68(plVar9,*(long *)PTR_DAT_0ac75cb8,6);
LAB_090c7314:
    (*(code *)*puVar4)(&local_4c,plVar9,puVar4[1]);
    plVar9 = *(long **)(param_1 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar6 = *plVar9;
      lVar5 = *(long *)puVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
            goto LAB_090c7380;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_04980e68(plVar9,lVar5,6);
LAB_090c7380:
      (*(code *)*puVar4)(&local_4c,plVar9,puVar4[1]);
      plVar9 = *(long **)(param_1 + 0x28);
      if (plVar9 != (long *)0x0) {
        lVar6 = *plVar9;
        lVar5 = *(long *)puVar2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 6) * 0x10 + 0x138);
              goto LAB_090c73ec;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_04980e68(plVar9,lVar5,6);
LAB_090c73ec:
        (*(code *)*puVar4)(&local_4c,plVar9,puVar4[1]);
        iVar1 = *(int *)(param_1 + 0x38);
        bVar3 = (local_4c & 0x20f) == 0;
        if ((iVar1 != 0) && ((local_44 < DAT_01df4ac0 || (iVar1 != 1)))) {
          bVar3 = (bool)((local_4c & 0x20f) == 0 &
                        ((iVar1 != 2 || (local_48 < DAT_01df4ac0 || local_44 < DAT_01df4ac0)) ^
                        0xffU));
        }
        *(bool *)(param_1 + 100) = bVar3;
        *(undefined4 *)(param_1 + 0x78) = 0;
        *(float *)(param_1 + 0x74) = 1.0 - local_48;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


