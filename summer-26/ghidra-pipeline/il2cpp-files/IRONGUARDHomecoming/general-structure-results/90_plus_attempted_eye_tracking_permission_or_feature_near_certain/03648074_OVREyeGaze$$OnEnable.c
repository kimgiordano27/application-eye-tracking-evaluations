/*
FUNCTION_NAME: OVREyeGaze$$OnEnable
ENTRY_POINT: 03648074
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 149
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0364839c) */

void OVREyeGaze__OnEnable
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,ulong param_5)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  int iVar11;
  ulong unaff_x20;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int in_stack_00000018;
  
  do {
    lVar3 = FUN_036a2a20(param_4,param_5,0);
    if (lVar3 == 0) break;
    plVar4 = (long *)FUN_0407eda0(lVar3,0);
LAB_0364808c:
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar3 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_036480dc;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,0);
LAB_036480dc:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    iVar11 = (int)unaff_x20;
    if ((uVar8 & 1) != 0) {
      lVar3 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_0364813c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*unaff_x26,1);
LAB_0364813c:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar6);
      }
      uVar7 = FUN_040766fc(plVar6,0);
      uVar8 = FUN_0340e600(uVar7,*unaff_x28,0);
      if ((uVar8 & 1) == 0) {
        fVar12 = (float)FUN_0407c8cc(plVar6,0);
        fVar13 = (float)FUN_0407ec3c(plVar6,0);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar3 = *(long *)(unaff_x22 + 0x10);
        lVar9 = *unaff_x29;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        fVar14 = unaff_s12 * param_2;
        param_2 = unaff_s12 * param_3;
        if (uVar2 < *(uint *)(lVar3 + 0x18)) {
          lVar3 = lVar3 + (int)uVar2 * unaff_x24;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(float *)(lVar3 + 0x20) = unaff_s12 * fVar12;
          *(float *)(lVar3 + 0x24) = fVar14;
          *(float *)(lVar3 + 0x28) = param_2;
          *(float *)(lVar3 + 0x2c) = fVar13 * unaff_s11;
          *(int *)(lVar3 + 0x30) = iVar11;
          param_3 = fVar14;
        }
        else {
          fStack0000000000000008 = unaff_s12 * fVar12;
          fStack000000000000000c = fVar14;
          fStack0000000000000010 = param_2;
          fStack0000000000000014 = fVar13 * unaff_s11;
          in_stack_00000018 = iVar11;
          FUN_030acdf4(unaff_x22,&stack0x00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          param_3 = fVar14;
        }
        uVar7 = FUN_040703d4(plVar6,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_040770d0(uVar7,0);
      }
      goto LAB_0364808c;
    }
    plVar4 = (long *)thunk_FUN_01f116d0(plVar4,*(undefined8 *)
                                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_036482dc;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_036482dc:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
    }
    param_5 = (ulong)(iVar11 + 1U);
    if (iVar11 + 1U == 0x18) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) break;
    unaff_x22 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),param_5,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
    param_4 = *(long *)(unaff_x19 + 0x20);
    unaff_x20 = param_5;
  } while (param_4 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


