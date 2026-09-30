/*
FUNCTION_NAME: UniJSON.Utf8StringExtensions$$TrySearchAscii
ENTRY_POINT: 02f461a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02f462e8) */

long * UniJSON_Utf8StringExtensions__TrySearchAscii(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint in_w8;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *plVar8;
  long unaff_x23;
  long unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (in_w8 <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    unaff_x21[(long)(int)unaff_w22 + 4] = unaff_x27;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (unaff_x21 + (long)(int)unaff_w22 + 4,unaff_x27);
    unaff_w22 = unaff_w22 + 1;
    do {
      do {
        puVar1 = PTR_DAT_03d23cb8;
        unaff_x19 = unaff_x19 + 1;
        if ((int)*(uint *)(unaff_x23 + 0x18) <= (int)(uint)unaff_x19) {
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          if (unaff_w22 != *(uint *)(unaff_x21 + 3)) {
            unaff_x21 = (long *)FUN_01ab6a94(*(undefined8 *)PTR_DAT_03cfffe8,unaff_w22);
            FUN_02793ce8();
          }
          lVar7 = *(long *)puVar1;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01a58e78();
            lVar7 = *(long *)PTR_DAT_03d23cb8;
          }
          plVar8 = *(long **)(*(long *)(lVar7 + 0xb8) + 0x28);
          thunk_FUN_01a4b338();
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          (**(code **)(*plVar8 + 0x318))
                    (plVar8,in_stack_00000010,unaff_x21,*(undefined8 *)(*plVar8 + 800));
          if (in_stack_00000018._4_1_ != '\0') {
            OVRManager_<>c__<InitOVRManager>b__424_0(in_stack_00000008,0);
          }
          return unaff_x21;
        }
        if (*(uint *)(unaff_x23 + 0x18) <= (uint)unaff_x19) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        plVar8 = *(long **)(unaff_x20 + unaff_x19 * 8);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        lVar7 = (**(code **)(*plVar8 + 0x328))(plVar8,*(undefined8 *)(*plVar8 + 0x330));
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      } while (*(long *)(lVar7 + 0x18) != 0);
      uVar2 = FUN_0267f990(plVar8,0);
      uVar3 = FUN_0267f9b8(plVar8,0);
      uVar4 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
      uVar5 = FUN_0267de10(uVar2,0,0);
    } while ((uVar5 & 1) == 0);
    uVar6 = (**(code **)(*plVar8 + 0x318))(plVar8,*(undefined8 *)(*plVar8 + 800));
    unaff_x27 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d239b0);
    FUN_02f3cd1c(unaff_x27,in_stack_00000010,uVar4,uVar6,plVar8,uVar2,uVar3,0);
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if ((unaff_x27 != 0) &&
       (lVar7 = thunk_FUN_01a89d6c(unaff_x27,*(undefined8 *)(*unaff_x21 + 0x40)), lVar7 == 0)) {
      uVar2 = thunk_FUN_01aa6f78();
                    /* WARNING: Subroutine does not return */
      FUN_01ab6b14(uVar2,0);
    }
    in_w8 = *(uint *)(unaff_x21 + 3);
  } while( true );
}


