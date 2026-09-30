/*
FUNCTION_NAME: OVRPlugin$$GetNodePoseStateImmediate
ENTRY_POINT: 027ebfbc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetNodePoseStateImmediate(long param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 in_x9;
  long lVar7;
  uint in_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar8;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      *unaff_x21 = 0;
      *unaff_x20 = 0;
      return 0;
    }
    if ((uint)in_x9 <= in_w10) {
LAB_027ec034:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar8 = param_1 + (long)(int)in_w10 * 0x20;
    if (*(int *)(lVar8 + 0x38) == 0) {
      lVar1 = *(long *)(lVar8 + 0x20);
      lVar7 = *(long *)(lVar8 + 0x28);
      lVar8 = *(long *)(lVar8 + 0x30);
      thunk_FUN_01a4b338();
      if (lVar8 == 0) {
        lVar8 = *unaff_x19;
        if (lVar8 == 0) goto LAB_027ec038;
        uVar2 = *(uint *)(unaff_x19 + 1);
        if (*(uint *)(lVar8 + 0x18) <= uVar2) goto LAB_027ec034;
        thunk_FUN_01a4b338();
        uVar5 = thunk_FUN_01a89e68(*unaff_x24);
        in_stack_00000008 = 0;
        FUN_02168c00(uVar5,&stack0x00000008,*unaff_x25);
        FUN_01aa50f0(lVar8 + (long)(int)uVar2 * 0x20 + 0x30,uVar5,0);
      }
      iVar4 = FUN_027b9158(0);
      if ((iVar4 == 4) && ((char)unaff_x19[5] != '\0')) {
        lVar8 = *unaff_x19;
        if (lVar8 == 0) goto LAB_027ec038;
        if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
        lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x30);
        thunk_FUN_01a4b338();
        if (lVar8 == 0) goto LAB_027ec038;
        iVar4 = FUN_01aa51c4(lVar8 + 0x10,(int)unaff_x19[3]);
        lVar8 = (long)iVar4 - unaff_x19[3];
      }
      else {
        lVar8 = *unaff_x19;
        if (lVar8 == 0) goto LAB_027ec038;
        if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
        lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x30);
        thunk_FUN_01a4b338();
        if (lVar8 == 0) goto LAB_027ec038;
        lVar8 = FUN_01aa51e0(lVar8 + 0x10,unaff_x19[3]);
        lVar8 = lVar8 - unaff_x19[3];
      }
      if (lVar8 < lVar7 - lVar1) {
        *unaff_x21 = lVar8 + lVar1;
        lVar8 = unaff_x19[3] + lVar8 + lVar1;
        if (lVar1 <= lVar8 && lVar8 <= lVar7) {
          lVar7 = lVar8;
        }
        *unaff_x20 = lVar7;
        lVar8 = unaff_x19[4];
        if (unaff_x19[3] < lVar8) {
          lVar7 = unaff_x19[3] * 2;
          if (lVar7 - lVar8 == 0 || lVar7 < lVar8) {
            lVar8 = lVar7;
          }
          unaff_x19[3] = lVar8;
          return 1;
        }
        return 1;
      }
      lVar8 = *unaff_x19;
      if (lVar8 == 0) {
LAB_027ec038:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x19 + 1)) goto LAB_027ec034;
      FUN_01aa5300(lVar8 + (long)(int)*(uint *)(unaff_x19 + 1) * 0x20 + 0x38,1);
      param_1 = *unaff_x19;
      if (param_1 == 0) goto LAB_027ec038;
    }
    in_x9 = *(undefined8 *)(param_1 + 0x18);
    unaff_w26 = unaff_w26 + -1;
    in_NG = unaff_w26 < 0;
    in_ZR = unaff_w26 == 0;
    in_OV = '\0';
    iVar4 = (int)unaff_x19[1] + 1;
    iVar3 = 0;
    iVar6 = (int)in_x9;
    if (iVar6 != 0) {
      iVar3 = iVar4 / iVar6;
    }
    in_w10 = iVar4 - iVar3 * iVar6;
    *(uint *)(unaff_x19 + 1) = in_w10;
  } while( true );
}


