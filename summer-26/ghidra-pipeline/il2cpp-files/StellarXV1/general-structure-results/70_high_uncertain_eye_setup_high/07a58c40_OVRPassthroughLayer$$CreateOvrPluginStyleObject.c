/*
FUNCTION_NAME: OVRPassthroughLayer$$CreateOvrPluginStyleObject
ENTRY_POINT: 07a58c40
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPassthroughLayer__CreateOvrPluginStyleObject(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  int iVar7;
  long unaff_x20;
  long *plVar8;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  long in_stack_00000028;
  
  FUN_04077588();
  *(undefined1 *)(unaff_x20 + 0x4c5) = 1;
  puVar1 = PTR_DAT_092ed030;
  in_stack_00000028 = 0;
  iVar7 = 0;
  _uStack0000000000000008 = 0;
  _uStack0000000000000010 = 0;
  in_stack_00000020 = 0;
  _uStack0000000000000018 = 0;
  do {
    uVar2 = FUN_07a5849c();
    if ((uVar2 & 1) != 0) {
      if (in_stack_00000028 == 0) goto LAB_07a58dc4;
      lVar3 = FUN_089c7604(in_stack_00000028,0);
      if (*(char *)(unaff_x19 + 0x80) != '\0') {
        plVar8 = *(long **)(unaff_x19 + 0x38);
        if (plVar8 == (long *)0x0) goto LAB_07a58dc4;
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 9) * 0x10 + 0x138);
              goto LAB_07a58cf0;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)puVar1,9);
LAB_07a58cf0:
        uVar2 = (*(code *)*puVar4)(plVar8,iVar7,&stack0x00000008,puVar4[1]);
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000028 == 0) goto LAB_07a58dc4;
          UnityEngine_UIElements_TextShadow_PropertyBag_ColorProperty__GetValue
                    (uStack0000000000000008,uStack000000000000000c,uStack0000000000000010,
                     in_stack_00000028,0);
          if ((in_stack_00000028 == 0) ||
             (FUN_08a54bf4(uStack0000000000000014,uStack0000000000000018,uStack000000000000001c,
                           in_stack_00000020,in_stack_00000028,0), lVar3 == 0)) goto LAB_07a58dc4;
          uVar2 = FUN_089cac94(lVar3,0);
          if ((uVar2 & 1) == 0) {
            FUN_089cabd0(lVar3,1,0);
            if (in_stack_00000028 == 0) goto LAB_07a58dc4;
            FUN_08a54d7c(in_stack_00000028,0);
          }
          goto LAB_07a58da4;
        }
      }
      if (lVar3 == 0) {
LAB_07a58dc4:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      uVar2 = FUN_089cac94(lVar3,0);
      if ((uVar2 & 1) != 0) {
        if (in_stack_00000028 == 0) goto LAB_07a58dc4;
        FUN_08a54cc8(in_stack_00000028,0);
        FUN_089cabd0(lVar3,0,0);
      }
    }
LAB_07a58da4:
    iVar7 = iVar7 + 1;
    if (iVar7 == 0x13) {
      return;
    }
  } while( true );
}


