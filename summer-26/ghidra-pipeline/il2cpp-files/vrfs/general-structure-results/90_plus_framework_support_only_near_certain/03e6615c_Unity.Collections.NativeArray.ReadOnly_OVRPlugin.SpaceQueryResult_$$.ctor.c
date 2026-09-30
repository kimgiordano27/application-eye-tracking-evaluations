/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 03e6615c
PROGRAM: vrfs-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor
          (long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  code *in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  long lVar6;
  undefined4 uVar7;
  undefined8 in_stack_00000008;
  
code_r0x03e6615c:
                    /* catch() { ... } // from try @ 03e66150 with catch @ 03e66160 */
  uVar7 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x390));
                    /* catch() { ... } // from try @ 03e6612c with catch @ 03e66164 */
  if (unaff_x26 != 0) {
    do {
      if (*(uint *)(unaff_x26 + 0x18) <= (uint)unaff_x21) {
LAB_03e661b8:
                    /* WARNING: Subroutine does not return */
        FUN_0160eebc();
      }
      *(undefined4 *)(unaff_x26 + unaff_x21 * 4 + 0x20) = uVar7;
      uVar1 = in_stack_00000008._4_4_ + 1;
      lVar4 = *unaff_x23;
      in_stack_00000008._4_4_ = uVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_016466fc();
        lVar4 = *unaff_x23;
      }
      uVar2 = in_stack_00000008._4_4_;
      if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x18) <= (int)uVar1) {
        return 1;
      }
      lVar4 = *(long *)(unaff_x19 + 0x88);
      lVar6 = (long)(int)in_stack_00000008._4_4_;
      uVar5 = FUN_032194f0((long)&stack0x00000008 + 4,0);
      FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
      uVar5 = (**(code **)(*unaff_x20 + 0x1a8))();
      if (*(int *)(*unaff_x22 + 0xe0) == 0) {
        thunk_FUN_016466fc(*unaff_x22);
      }
      bVar3 = FUN_04161114(uVar5,0,0);
      if (lVar4 == 0) break;
      if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_03e661b8;
      *(byte *)(lVar4 + lVar6 + 0x20) = bVar3 & 1;
      lVar4 = *(long *)(unaff_x19 + 0x88);
      if (lVar4 == 0) break;
      unaff_x21 = (long)(int)in_stack_00000008._4_4_;
      if (*(uint *)(lVar4 + 0x18) <= in_stack_00000008._4_4_) goto LAB_03e661b8;
      unaff_x26 = *(long *)(unaff_x19 + 0x90);
      if (*(char *)(lVar4 + unaff_x21 + 0x20) != '\0') goto code_r0x03e66118;
      uVar7 = 0;
      if (unaff_x26 == 0) break;
    } while( true );
  }
thunk_FUN_0160eeb4:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
code_r0x03e66118:
  uVar5 = FUN_032194f0((long)&stack0x00000008 + 4,0);
  FUN_02526be4(*unaff_x24,uVar5,*unaff_x25,0);
  param_2 = (long *)(**(code **)(*unaff_x20 + 0x1a8))();
  if (param_2 == (long *)0x0) goto thunk_FUN_0160eeb4;
  param_1 = *param_2;
  in_x9 = *(code **)(param_1 + 0x388);
  goto code_r0x03e6615c;
}


