/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateAtTime
ENTRY_POINT: 027ebe84
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodePoseStateAtTime(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long in_x9;
  long lVar7;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  long unaff_x27;
  long unaff_x28;
  undefined8 in_stack_00000008;
  
  do {
    if (*(uint *)(param_1 + 0x18) <= (uint)in_x9) {
LAB_027ec034:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    thunk_FUN_01a4b338();
    uVar4 = thunk_FUN_01a89e68(*unaff_x24);
    in_stack_00000008 = 0;
    FUN_02168c00(uVar4,&stack0x00000008,*unaff_x25);
    FUN_01aa50f0(param_1 + in_x9 * 0x20 + 0x30,uVar4,0);
    do {
      iVar3 = FUN_027b9158(0);
      if ((iVar3 == 4) && ((char)unaff_x19[5] != '\0')) {
        lVar5 = *unaff_x19;
        if (lVar5 == 0) goto LAB_027ec038;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
        lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x30);
        thunk_FUN_01a4b338();
        if (lVar5 == 0) goto LAB_027ec038;
        iVar3 = FUN_01aa51c4(lVar5 + 0x10,(int)unaff_x19[3]);
        lVar5 = (long)iVar3 - unaff_x19[3];
      }
      else {
        lVar5 = *unaff_x19;
        if (lVar5 == 0) goto LAB_027ec038;
        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
        lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x30);
        thunk_FUN_01a4b338();
        if (lVar5 == 0) goto LAB_027ec038;
        lVar5 = FUN_01aa51e0(lVar5 + 0x10,unaff_x19[3]);
        lVar5 = lVar5 - unaff_x19[3];
      }
      if (lVar5 < unaff_x27 - unaff_x28) {
        *unaff_x21 = lVar5 + unaff_x28;
        lVar5 = unaff_x19[3] + lVar5 + unaff_x28;
        if (unaff_x28 <= lVar5 && lVar5 <= unaff_x27) {
          unaff_x27 = lVar5;
        }
        *unaff_x20 = unaff_x27;
        lVar5 = unaff_x19[4];
        if (unaff_x19[3] < lVar5) {
          lVar7 = unaff_x19[3] * 2;
          if (lVar7 - lVar5 == 0 || lVar7 < lVar5) {
            lVar5 = lVar7;
          }
          unaff_x19[3] = lVar5;
        }
        return 1;
      }
      lVar5 = *unaff_x19;
      if (lVar5 == 0) goto LAB_027ec038;
      if (*(uint *)(lVar5 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
      FUN_01aa5300(lVar5 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x38,1);
      lVar5 = *unaff_x19;
      if (lVar5 == 0) goto LAB_027ec038;
      do {
        unaff_w26 = unaff_w26 + -1;
        iVar3 = (int)unaff_x19[1] + 1;
        iVar2 = 0;
        uVar6 = (uint)*(undefined8 *)(lVar5 + 0x18);
        if (uVar6 != 0) {
          iVar2 = iVar3 / (int)uVar6;
        }
        uVar1 = iVar3 - iVar2 * uVar6;
        *(uint *)(unaff_x19 + 1) = uVar1;
        if (unaff_w26 < 1) {
          *unaff_x21 = 0;
          *unaff_x20 = 0;
          return 0;
        }
        if (uVar6 <= uVar1) goto LAB_027ec034;
        lVar7 = lVar5 + (long)(int)uVar1 * 0x20;
      } while (*(int *)(lVar7 + 0x38) != 0);
      unaff_x28 = *(long *)(lVar7 + 0x20);
      unaff_x27 = *(long *)(lVar7 + 0x28);
      lVar5 = *(long *)(lVar7 + 0x30);
      thunk_FUN_01a4b338();
    } while (lVar5 != 0);
    param_1 = *unaff_x19;
    if (param_1 == 0) {
LAB_027ec038:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    in_x9 = (long)(int)unaff_x19[1];
  } while( true );
}


