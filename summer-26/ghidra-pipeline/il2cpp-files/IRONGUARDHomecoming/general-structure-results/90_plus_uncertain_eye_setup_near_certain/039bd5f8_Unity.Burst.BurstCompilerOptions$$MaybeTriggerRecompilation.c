/*
FUNCTION_NAME: Unity.Burst.BurstCompilerOptions$$MaybeTriggerRecompilation
ENTRY_POINT: 039bd5f8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x039bd4c8) */
/* WARNING: Removing unreachable block (ram,0x039bd73c) */

void Unity_Burst_BurstCompilerOptions__MaybeTriggerRecompilation(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x27;
  long *unaff_x29;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long *in_stack_00000048;
  
  if (param_2 != 1) {
    if (in_stack_00000048 != (long *)0x0) {
      lVar10 = *in_stack_00000048;
      uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar4 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto code_r0x039bd724;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_01ecb238(in_stack_00000048,
                            *(long *)
                             Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
code_r0x039bd724:
      (*(code *)*puVar4)(in_stack_00000048,puVar4[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar6 = (long *)__cxa_begin_catch(param_1);
  lVar10 = *plVar6;
  __cxa_end_catch();
  if (in_stack_00000048 != (long *)0x0) {
    lVar7 = *in_stack_00000048;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_039bd374;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(in_stack_00000048,
                          *(long *)
                           Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__,
                          0);
LAB_039bd374:
    (*(code *)*puVar4)(in_stack_00000048,puVar4[1]);
  }
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar10);
  }
  if (*(long *)(in_stack_00000030 + 0x28) == 0) {
    if (unaff_x27 == 0) goto LAB_039bd570;
    uVar1 = *(undefined4 *)(in_stack_00000038 + 0x10);
    uVar5 = FUN_030f4630();
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar10,0);
    *(undefined4 *)(lVar10 + 0x20) = uVar1;
    *(undefined4 *)(lVar10 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar10 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar10 + 0x18) = 0x7fffffff7fffffff;
    *(undefined8 *)(lVar10 + 0x28) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar5);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar10;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar10);
  }
  else {
    FUN_039bae78();
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (in_stack_00000028 == 0)) goto LAB_039bd570;
    FUN_0399e034(in_stack_00000028,*(long *)(unaff_x19 + 0x10),0);
    if (*unaff_x29 == 0) goto LAB_039bd570;
    FUN_039b0038(*unaff_x29,in_stack_00000028);
    FUN_039b65ec();
    if ((*(long *)(unaff_x19 + 0x10) == 0) || (FUN_039b00bc(), *unaff_x29 == 0)) goto LAB_039bd570;
    uVar1 = *(undefined4 *)(in_stack_00000028 + 0x10);
    uVar2 = *(undefined4 *)(in_stack_00000038 + 0x10);
    uVar3 = System_ComponentModel_ArrayConverter___ctor();
    if (unaff_x27 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_030f4630();
    }
    lVar10 = thunk_FUN_01f117cc(*(undefined8 *)StringLiteral_5390);
    FUN_035ac8e8(lVar10,0);
    *(undefined4 *)(lVar10 + 0x18) = uVar1;
    *(undefined4 *)(lVar10 + 0x1c) = uVar3;
    *(undefined4 *)(lVar10 + 0x20) = uVar2;
    *(undefined4 *)(lVar10 + 0x10) = in_stack_00000020._4_4_;
    *(undefined4 *)(lVar10 + 0x14) = in_stack_00000010._4_4_;
    *(undefined8 *)(lVar10 + 0x28) = uVar5;
    thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar5);
    if (in_stack_00000018 == 0) goto LAB_039bd570;
    *(long *)(in_stack_00000018 + 0x18) = lVar10;
    thunk_FUN_01f51358((long *)(in_stack_00000018 + 0x18),lVar10);
    FUN_039baf84();
  }
  if ((*unaff_x29 != 0) && (in_stack_00000008 != 0)) {
    FUN_0399e034(in_stack_00000008,*unaff_x29,0);
    FUN_039baf84();
    return;
  }
LAB_039bd570:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


