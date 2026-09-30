/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetSubArray
ENTRY_POINT: 047a9228
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetSubArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_047a9258;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_0367cd30(unaff_x21,param_3,0);
LAB_047a9258:
        uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
        plVar7 = in_stack_00000058;
        if ((uVar2 & 1) == 0) {
          plVar7 = (long *)*in_stack_00000038;
          if (plVar7 == (long *)0x0) goto LAB_047a945c;
          lVar3 = *plVar7;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_047a9434;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_047a941c;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_0367c9fc(lVar3);
        }
        lVar4 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar3) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_047a92dc;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_0367cd30(plVar7,lVar3,0);
LAB_047a92dc:
        (*(code *)*puVar1)(&stack0x00000018,plVar7,puVar1[1]);
        lVar3 = *(long *)(unaff_x20 + 0x10);
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000050 = in_stack_00000028;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        if (uVar5 == *(uint *)(lVar3 + 0x18)) {
          FUN_047a77d8();
          uVar5 = *(uint *)(unaff_x20 + 0x18);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03642c18();
          }
        }
        else {
          *(uint *)(unaff_x20 + 0x18) = uVar5 + 1;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        lVar3 = lVar3 + (long)(int)uVar5 * (long)unaff_w23;
        *(undefined8 *)(lVar3 + 0x28) = in_stack_00000048;
        *(undefined8 *)(lVar3 + 0x20) = in_stack_00000040;
        *(undefined8 *)(lVar3 + 0x30) = in_stack_00000050;
        thunk_FUN_036b7ad0(lVar3 + 0x20,0);
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        param_1 = *in_stack_00000058;
        param_3 = *unaff_x22;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x21 = in_stack_00000058;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_047a941c:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_047a9450;
    }
  }
LAB_047a9434:
  puVar1 = (undefined8 *)FUN_0367cd30(plVar7,*(long *)PTR_DAT_079f4598,0);
LAB_047a9450:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_047a945c:
  if (in_stack_00000030 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c00();
}


