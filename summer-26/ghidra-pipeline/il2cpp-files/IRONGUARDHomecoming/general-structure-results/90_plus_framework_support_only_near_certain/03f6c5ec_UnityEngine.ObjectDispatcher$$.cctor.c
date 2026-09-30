/*
FUNCTION_NAME: UnityEngine.ObjectDispatcher$$.cctor
ENTRY_POINT: 03f6c5ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03f6cb88) */
/* WARNING: Removing unreachable block (ram,0x03f6ca4c) */
/* WARNING: Removing unreachable block (ram,0x03f6cb80) */

void UnityEngine_ObjectDispatcher___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined1 in_w8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar16;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  ulong uVar17;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  char cStack000000000000001c;
  
  *(undefined1 *)(unaff_x19 + 0x56c) = in_w8;
  uVar7 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_035ac8e8(uVar7,0);
  **(undefined8 **)(*unaff_x23 + 0xb8) = uVar7;
  thunk_FUN_01f51358(*(undefined8 *)(*unaff_x23 + 0xb8),uVar7);
  uVar7 = thunk_FUN_01f117cc(*unaff_x20);
  FUN_030f2380(uVar7,*unaff_x29);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  uVar7 = thunk_FUN_01f117cc(*unaff_x28);
  FUN_030f2380(uVar7,*unaff_x27);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  uVar7 = thunk_FUN_01f117cc(*unaff_x26);
  FUN_02ee7c10(uVar7,*unaff_x25);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  uVar7 = thunk_FUN_01f117cc(*unaff_x24);
  FUN_02b6aa68(uVar7,*unaff_x22);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar8 = 0;
  thunk_FUN_01f51358(puVar8,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
  *puVar8 = 0;
  thunk_FUN_01f51358(puVar8,0);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
  *puVar8 = 0;
  thunk_FUN_01f51358(puVar8,0);
  uVar7 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_04581080);
  FUN_02b6aa68(uVar7,*(undefined8 *)PTR_DAT_04581078);
  puVar8 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x40);
  *puVar8 = uVar7;
  thunk_FUN_01f51358(puVar8,uVar7);
  uVar7 = **(undefined8 **)(*unaff_x23 + 0xb8);
  cStack000000000000001c = '\0';
  FUN_035ce230(uVar7,&stack0x0000001c,0);
  lVar9 = thunk_FUN_01ec9ab0(0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar9 = FUN_035aee10(lVar9,0);
  puVar6 = StringLiteral_5820;
  puVar5 = StringLiteral_5819;
  puVar4 = Method_UnityEngine_Component_TryGetComponent<OVRScenePlane>__;
  puVar3 = Method_System_Dynamic_Utils_CollectionExtensions_ToReadOnly<CatchBlock>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar17 = 0;
    uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar12 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar16 = *(undefined8 *)(lVar9 + uVar17 * 8 + 0x20);
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)StringLiteral_3393;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(lVar10 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
        *puVar8 = uVar16;
        thunk_FUN_01f51358(puVar8,uVar16);
      }
      else {
        FUN_030f2bb4(lVar10,uVar16,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      plVar11 = (long *)FUN_03f6cc30(uVar16);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar5,0);
UnityEngine_ObjectDispatcher_<>c__<_cctor>b__54_1:
      plVar11 = (long *)(*(code *)*puVar8)(plVar11,puVar8[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
LAB_03f6c8b4:
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_03f6c900;
          }
          uVar12 = uVar12 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar2,0);
LAB_03f6c900:
      uVar12 = (*(code *)*puVar8)(plVar11,puVar8[1]);
      if ((uVar12 & 1) != 0) {
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f6c95c;
            }
            uVar12 = uVar12 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar6,0);
LAB_03f6c95c:
        uVar16 = (*(code *)*puVar8)(plVar11,puVar8[1]);
        lVar10 = *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar13 = *(long *)(lVar10 + 0x10);
        lVar14 = *(long *)puVar4;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          puVar8 = (undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *puVar8 = uVar16;
          thunk_FUN_01f51358(puVar8);
        }
        else {
          FUN_030f2bb4(lVar10,uVar16,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        goto LAB_03f6c8b4;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = *plVar11;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) ==
                *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03f6ca34;
            }
            uVar12 = uVar12 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01ecb238(plVar11,*(long *)
                                       Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                              ,0);
LAB_03f6ca34:
        (*(code *)*puVar8)(plVar11,puVar8[1]);
      }
      uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(lVar9 + 0x18));
  }
  if (cStack000000000000001c != '\0') {
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar7,0);
  }
  return;
}


