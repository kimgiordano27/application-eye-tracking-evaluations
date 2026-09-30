/*
FUNCTION_NAME: Normal.Realtime.Collections.StringKeyDictionary.DidRemoveModelForKey<object>$$EndInvoke
ENTRY_POINT: 05f9a344
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_5
*/


undefined8
Normal_Realtime_Collections_StringKeyDictionary_DidRemoveModelForKey<object>__EndInvoke(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  int unaff_w23;
  long *unaff_x24;
  uint uVar7;
  long unaff_x26;
  int unaff_w27;
  uint unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000008;
  int *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  do {
    if (unaff_x24 == (long *)0x0) {
Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
      :
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar3 = (**(code **)(*unaff_x24 + 0x1b8))();
    if ((uVar3 & 1) != 0) {
      if (in_stack_00000008._4_1_ == '\x02') {
        FUN_067722d8();
      }
      else if (in_stack_00000008._4_1_ == '\x01') {
        if (unaff_w28 < *(uint *)(unaff_x26 + 0x18)) {
          *(undefined4 *)(unaff_x19 + (long)(int)unaff_w28 * 0x18 + 0x10) = in_stack_00000018._4_4_;
          return 1;
        }
LAB_05f9a52c:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      return 0;
    }
    uVar3 = (ulong)*(uint *)(unaff_x26 + 0x18);
    do {
      if ((uint)uVar3 <= unaff_w28) goto LAB_05f9a52c;
      unaff_w28 = *(uint *)(unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w29 + 4);
      if ((int)(uint)uVar3 <= unaff_w23) {
        FUN_067723dc(0);
      }
      uVar3 = *(ulong *)(unaff_x26 + 0x18);
      unaff_w23 = unaff_w23 + 1;
      uVar7 = (uint)uVar3;
      if (uVar7 <= unaff_w28) {
        if (*(int *)(unaff_x21 + 0x28) < 1) {
          uVar6 = *(uint *)(unaff_x21 + 0x20);
          if (uVar6 == uVar7) {
            FUN_05f9a8f8();
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(uint *)(unaff_x21 + 0x20) = uVar7 + 1;
            if (lVar5 == 0)
            goto 
            Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
            ;
            uVar7 = *(uint *)(lVar5 + 0x18);
            iVar1 = 0;
            if (uVar7 != 0) {
              iVar1 = unaff_w27 / (int)uVar7;
            }
            uVar2 = unaff_w27 - iVar1 * uVar7;
            if (uVar7 <= uVar2) goto LAB_05f9a52c;
            lVar4 = *(long *)(unaff_x21 + 0x18);
            in_stack_00000010 = (int *)(lVar5 + (ulong)uVar2 * 4 + 0x20);
          }
          else {
            lVar4 = *(long *)(unaff_x21 + 0x18);
            *(uint *)(unaff_x21 + 0x20) = uVar6 + 1;
          }
          if (lVar4 == 0)
          goto 
          Unity_Netcode_UserNetworkVariableSerialization_DuplicateValueDelegate<NativeArray<ulong>>__EndInvoke
          ;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_05f9a52c;
          lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
        }
        else {
          uVar6 = *(uint *)(unaff_x21 + 0x24);
          *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x21 + 0x28) + -1;
          if (uVar7 <= uVar6) goto LAB_05f9a52c;
          lVar4 = unaff_x26 + (long)(int)uVar6 * 0x18;
          *(undefined4 *)(unaff_x21 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
        }
        *(int *)(lVar4 + 0x20) = unaff_w27;
        iVar1 = *in_stack_00000010;
        *(undefined8 *)(lVar4 + 0x28) = unaff_x20;
        *(int *)(lVar4 + 0x24) = iVar1 + -1;
        thunk_FUN_03afed3c();
        *(undefined4 *)(lVar4 + 0x30) = in_stack_00000018._4_4_;
        *in_stack_00000010 = uVar6 + 1;
        return 1;
      }
    } while (*(int *)(unaff_x19 + (long)(int)unaff_w28 * (long)unaff_w29) != unaff_w27);
  } while( true );
}


