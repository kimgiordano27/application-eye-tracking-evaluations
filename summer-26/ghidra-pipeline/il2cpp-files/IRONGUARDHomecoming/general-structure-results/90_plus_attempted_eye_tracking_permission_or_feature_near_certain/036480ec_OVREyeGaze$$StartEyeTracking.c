/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 036480ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 149
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_3;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0364839c) */

void OVREyeGaze__StartEyeTracking(undefined1 param_1 [16],float param_2,float param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int in_stack_00000018;
  
code_r0x036480ec:
  lVar6 = *unaff_x21;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x26) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0364813c;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x26,1);
LAB_0364813c:
  plVar4 = (long *)(*(code *)*puVar3)(unaff_x21,puVar3[1]);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  bVar1 = *(byte *)(*unaff_x27 + 0x130);
  if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc(plVar4);
  }
  uVar5 = FUN_040766fc(plVar4,0);
  uVar7 = FUN_0340e600(uVar5,*unaff_x28,0);
  if ((uVar7 & 1) == 0) {
    fVar10 = (float)FUN_0407c8cc(plVar4,0);
    fVar11 = (float)FUN_0407ec3c(plVar4,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *(long *)(unaff_x22 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    fVar12 = unaff_s12 * param_2;
    param_2 = unaff_s12 * param_3;
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (int)uVar2 * unaff_x24;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(float *)(lVar6 + 0x20) = unaff_s12 * fVar10;
      *(float *)(lVar6 + 0x24) = fVar12;
      *(float *)(lVar6 + 0x28) = param_2;
      *(float *)(lVar6 + 0x2c) = fVar11 * unaff_s11;
      *(int *)(lVar6 + 0x30) = unaff_w20;
      param_3 = fVar12;
    }
    else {
      fStack0000000000000008 = unaff_s12 * fVar10;
      fStack000000000000000c = fVar12;
      fStack0000000000000010 = param_2;
      fStack0000000000000014 = fVar11 * unaff_s11;
      in_stack_00000018 = unaff_w20;
      FUN_030acdf4(unaff_x22,&stack0x00000008,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      param_3 = fVar12;
    }
    uVar5 = FUN_040703d4(plVar4,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_040770d0(uVar5,0);
  }
  do {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar6 = *unaff_x21;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x26) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036480dc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(unaff_x21,*unaff_x26,0);
LAB_036480dc:
    uVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
    if ((uVar7 & 1) != 0) goto code_r0x036480ec;
    plVar4 = (long *)thunk_FUN_01f116d0(unaff_x21,
                                        *(undefined8 *)
                                         Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                       );
    if (plVar4 != (long *)0x0) {
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_036482dc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)
               FUN_01ecb238(plVar4,*(long *)
                                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                            ,0);
LAB_036482dc:
      (*(code *)*puVar3)(plVar4,puVar3[1]);
    }
    unaff_w20 = unaff_w20 + 1;
    if (unaff_w20 == 0x18) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_03648398:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    unaff_x22 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),unaff_w20,
                             *(undefined8 *)
                              Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
    if ((*(long *)(unaff_x19 + 0x20) == 0) ||
       (lVar6 = FUN_036a2a20(*(long *)(unaff_x19 + 0x20),unaff_w20,0), lVar6 == 0))
    goto LAB_03648398;
    unaff_x21 = (long *)FUN_0407eda0(lVar6,0);
  } while( true );
}


