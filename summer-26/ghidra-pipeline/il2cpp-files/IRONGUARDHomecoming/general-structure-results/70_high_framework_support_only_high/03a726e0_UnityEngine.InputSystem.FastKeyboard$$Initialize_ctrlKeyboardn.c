/*
FUNCTION_NAME: UnityEngine.InputSystem.FastKeyboard$$Initialize_ctrlKeyboardn
ENTRY_POINT: 03a726e0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a72a00) */
/* WARNING: Removing unreachable block (ram,0x03a72964) */
/* WARNING: Removing unreachable block (ram,0x03a72a10) */

long UnityEngine_InputSystem_FastKeyboard__Initialize_ctrlKeyboardn(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 03a726e0 to 03b726f3 has its CatchHandler @ 03a72740 */
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x388))(param_1,*(undefined8 *)(*param_1 + 0x390));
  puVar3 = StringLiteral_7853;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
                    /* try { // try from 03a726f4 to 03b72707 has its CatchHandler @ 03a72478 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a72708 with catch @ 03a72734
                        */
        if (*(long *)(piVar11 + -2) == lVar7) {
                    /* try { // try from 03a7275c to 03b7275f has its CatchHandler @ 03a72778 */
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a72760;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a726e0 with catch @ 03a72740
                        */
      } while (uVar10 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a72600 with catch @ 03a72748
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03a725a4 with catch @ 03a7274c
                        */
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,0);
LAB_03a72760:
    uVar10 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar10 & 1) == 0) {
      lVar7 = 0;
      iVar12 = 9;
      goto LAB_03a728ec;
    }
    lVar8 = *plVar4;
    lVar7 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 03a7275c with catch @ 03a72778 */
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar7) {
                    /* try { // try from 03a727b0 to 03b727d7 has its CatchHandler @ 03a727ec */
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03a727c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar7,1);
LAB_03a727c0:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar13 = *(undefined8 *)puVar3;
                    /* try { // try from 03a727d8 to 03b727e3 has its CatchHandler @ 03a72478 */
    plVar6 = (long *)thunk_FUN_01f116d0(lVar7,uVar13);
                    /* try { // try from 03a727e4 to 03b727eb has its CatchHandler @ 03a727ec */
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar7,uVar13);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03a727b0 with catch @ 03a727ec
                       catch(type#2 @ 00000000) { ... } // from try @ 03a727e4 with catch @ 03a727ec
                        */
    lVar7 = *plVar6;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_03a7283c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,1);
LAB_03a7283c:
    lVar7 = (*(code *)*puVar5)(plVar6);
  } while (lVar7 == 0);
  lVar8 = *plVar6;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_03a728c4;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,2);
LAB_03a728c4:
  uVar13 = (*(code *)*puVar5)(plVar6,puVar5[1]);
  *(undefined8 *)(lVar7 + 0x20) = uVar13;
  thunk_FUN_01f51358();
  iVar12 = 8;
LAB_03a728ec:
  plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)puVar1);
  if (plVar4 != (long *)0x0) {
    lVar9 = *plVar4;
    lVar8 = *(long *)puVar1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03a7294c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,lVar8,0);
LAB_03a7294c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (in_stack_00000008._4_1_ != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit();
  }
  if (iVar12 != 8) {
    lVar7 = 0;
  }
  return lVar7;
}


