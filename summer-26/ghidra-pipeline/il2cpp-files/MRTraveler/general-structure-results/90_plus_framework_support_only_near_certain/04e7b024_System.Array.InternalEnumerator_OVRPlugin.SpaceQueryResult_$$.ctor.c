/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04e7b024
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor
                (undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  ulong unaff_x19;
  ulong unaff_x20;
  long unaff_x22;
  int unaff_w23;
  ulong unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  int unaff_w29;
  long in_stack_00000008;
  
  do {
    param_2 = FUN_03cf1244(param_2);
    do {
      lVar6 = *unaff_x25;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == param_2) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04e7b078;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03cf1348(unaff_x25,param_2,0);
LAB_04e7b078:
      uVar7 = (*(code *)*puVar2)(unaff_x25,unaff_x27,unaff_x26);
      if ((uVar7 & 1) != 0) {
LAB_04e7b0c0:
        return unaff_x24 & 0xffffffff;
      }
      do {
        uVar5 = (uint)*(undefined8 *)(unaff_x28 + 0x18);
        if ((int)uVar5 <= unaff_w29) {
          thunk_FUN_03ce5214(PTR_DAT_08e71970);
          uVar3 = thunk_FUN_03cf5234();
          uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e83f58);
          FUN_07100530(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
          FUN_03c8f9fc(uVar3,in_stack_00000008);
        }
        if (uVar5 <= (uint)unaff_x24) {
LAB_04e7b0e4:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        uVar1 = *(uint *)(unaff_x28 + unaff_x20 * unaff_x19 + 0x24);
        unaff_x20 = (ulong)uVar1;
        unaff_w29 = unaff_w29 + 1;
        if ((int)uVar1 < 0) {
          unaff_x24 = 0xffffffff;
          goto LAB_04e7b0c0;
        }
        if (uVar5 <= uVar1) goto LAB_04e7b0e4;
        unaff_x24 = unaff_x20;
      } while (*(int *)(unaff_x28 + unaff_x20 * (unaff_x19 & 0xffffffff) + 0x20) != unaff_w23);
      unaff_x25 = *(long **)(unaff_x22 + 0x30);
      if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      param_2 = *(long *)(*(long *)(*(long *)(in_stack_00000008 + 0x20) + 0xc0) + 0x20);
      lVar6 = unaff_x28 + unaff_x20 * unaff_x19;
      unaff_x27 = *(undefined8 *)(lVar6 + 0x28);
      unaff_x26 = *(undefined8 *)(lVar6 + 0x30);
    } while ((*(byte *)(param_2 + 0x135) & 1) != 0);
  } while( true );
}


