/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 036482b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 147
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(long param_1,undefined1 param_2 [16],float param_3,float param_4,
                       undefined8 param_5,long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong in_x9;
  int *piVar11;
  int *in_x10;
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
  
code_r0x036482b8:
  in_x10 = in_x10 + 4;
  if (!(bool)in_ZR) goto LAB_036482a8;
LAB_036482c0:
  puVar8 = (undefined8 *)FUN_01ecb238(unaff_x21,param_6,0);
  do {
    (*(code *)*puVar8)(unaff_x21,puVar8[1]);
    do {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01eed990(unaff_x22);
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
      lVar3 = FUN_030f28e4(*(long *)(unaff_x19 + 0x28),unaff_w20,
                           *(undefined8 *)
                            Method_Unity_VisualScripting_LessThanHandler_<>c_<_ctor>b__0_28__);
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar4 = FUN_036a2a20(*(long *)(unaff_x19 + 0x20),unaff_w20,0), lVar4 == 0))
      goto LAB_03648398;
      plVar5 = (long *)FUN_0407eda0(lVar4,0);
LAB_0364808c:
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar4 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar9 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar8 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_036480dc;
          }
          uVar9 = uVar9 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,0);
LAB_036480dc:
      uVar9 = (*(code *)*puVar8)(plVar5,puVar8[1]);
      if ((uVar9 & 1) != 0) {
        lVar4 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x26) {
              puVar8 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0364813c;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_01ecb238(plVar5,*unaff_x26,1);
LAB_0364813c:
        plVar6 = (long *)(*(code *)*puVar8)(plVar5,puVar8[1]);
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
        uVar9 = FUN_0340e600(uVar7,*unaff_x28,0);
        if ((uVar9 & 1) == 0) {
          fVar12 = (float)FUN_0407c8cc(plVar6,0);
          fVar13 = (float)FUN_0407ec3c(plVar6,0);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar4 = *(long *)(lVar3 + 0x10);
          lVar10 = *unaff_x29;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar2 = *(uint *)(lVar3 + 0x18);
          fVar14 = unaff_s12 * param_3;
          param_3 = unaff_s12 * param_4;
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (int)uVar2 * unaff_x24;
            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
            *(float *)(lVar4 + 0x20) = unaff_s12 * fVar12;
            *(float *)(lVar4 + 0x24) = fVar14;
            *(float *)(lVar4 + 0x28) = param_3;
            *(float *)(lVar4 + 0x2c) = fVar13 * unaff_s11;
            *(int *)(lVar4 + 0x30) = unaff_w20;
            param_4 = fVar14;
          }
          else {
            fStack0000000000000008 = unaff_s12 * fVar12;
            fStack000000000000000c = fVar14;
            fStack0000000000000010 = param_3;
            fStack0000000000000014 = fVar13 * unaff_s11;
            in_stack_00000018 = unaff_w20;
            FUN_030acdf4(lVar3,&stack0x00000008,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            param_4 = fVar14;
          }
          uVar7 = FUN_040703d4(plVar6,0);
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          FUN_040770d0(uVar7,0);
        }
        goto LAB_0364808c;
      }
      unaff_x22 = 0;
      unaff_x21 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                                            );
    } while (unaff_x21 == (long *)0x0);
    param_1 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_6 = *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (in_x9 == 0) goto LAB_036482c0;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_036482a8:
    if (*(long *)(in_x10 + -2) != param_6) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      goto code_r0x036482b8;
    }
    puVar8 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  } while( true );
}


