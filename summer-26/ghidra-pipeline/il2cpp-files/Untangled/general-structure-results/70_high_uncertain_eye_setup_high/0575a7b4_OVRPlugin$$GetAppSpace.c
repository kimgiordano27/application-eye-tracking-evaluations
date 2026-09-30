/*
FUNCTION_NAME: OVRPlugin$$GetAppSpace
ENTRY_POINT: 0575a7b4
PROGRAM: Untangled-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppSpace(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_x9;
  long *unaff_x19;
  undefined8 unaff_x21;
  long unaff_x22;
  ulong uVar8;
  long unaff_x23;
  long lVar9;
  long unaff_x24;
  undefined8 uVar10;
  undefined8 *unaff_x27;
  
  puVar2 = PTR_DAT_06d59778;
  puVar1 = PTR_DAT_06d59770;
  if (*(long *)(in_x9 + 0x40) != *(long *)(*param_1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  puVar3 = (undefined4 *)thunk_FUN_02ef195c();
  *(undefined4 *)(unaff_x23 + 0x10) = *puVar3;
  uVar10 = *(undefined8 *)(unaff_x24 + 0x18);
  uVar4 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_0513bd28();
  lVar5 = FUN_03a2c33c(uVar10,uVar4,*(undefined8 *)puVar1);
  if (unaff_x19 != (long *)0x0) {
    (**(code **)(*unaff_x19 + 0x578))();
    if (unaff_x22 != 0) {
      FUN_056fd0d8();
    }
    (**(code **)(*unaff_x19 + 0x5d8))();
    if (lVar5 != 0) {
      (**(code **)(*unaff_x19 + 0x698))();
      if ((*(long *)(lVar5 + 0x20) == 0) || (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) == 0)) {
LAB_0575a9c0:
                    /* WARNING: Could not recover jumptable at 0x0575a9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x588))();
        return;
      }
      lVar9 = *(long *)(lVar5 + 0x28);
      lVar5 = FUN_02f07f14(*unaff_x27,1);
      if (lVar5 != 0) {
        lVar6 = thunk_FUN_02ef170c();
        if (lVar6 == 0) {
          uVar4 = thunk_FUN_02ea6cf0();
                    /* WARNING: Subroutine does not return */
          FUN_02f07f94(uVar4,0);
        }
        if (*(int *)(lVar5 + 0x18) == 0) {
LAB_0575a9f0:
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        *(undefined8 *)(lVar5 + 0x20) = unaff_x21;
        thunk_FUN_02f411dc();
        if (lVar9 != 0) {
          lVar5 = FUN_056e4c2c(lVar9,lVar5,0);
          if (lVar5 == 0) {
            lVar9 = 0;
          }
          else {
            uVar4 = *unaff_x27;
            lVar9 = thunk_FUN_02ef170c(lVar5,uVar4);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f08440(lVar5,uVar4);
            }
          }
          if (unaff_x22 != 0) {
            FUN_056fd0d8();
          }
          (**(code **)(*unaff_x19 + 0x5d8))();
          (**(code **)(*unaff_x19 + 0x598))();
          if (lVar9 != 0) {
            if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
              uVar8 = 0;
              uVar7 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
              do {
                if (uVar7 <= uVar8) goto LAB_0575a9f0;
                FUN_0569d504();
                uVar7 = (ulong)*(uint *)(lVar9 + 0x18);
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)*(uint *)(lVar9 + 0x18));
            }
            (**(code **)(*unaff_x19 + 0x5a8))();
            goto LAB_0575a9c0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


