/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 051b4630
PROGRAM: hellodot-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetCurrentTrackingTransformPose(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong in_x9;
  long lVar4;
  int *in_x10;
  long *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  int unaff_w25;
  ulong unaff_x26;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  
  do {
    if ((bool)in_ZR) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_051b467c;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar2 = (undefined8 *)FUN_02ce0a7c(unaff_x22,param_3,0);
LAB_051b467c:
        fVar5 = (float)(*(code *)*puVar2)(unaff_x22,unaff_x21 & 0xffffffff,puVar2[1]);
        if (*(long *)(unaff_x20 + 0xd0) == 0) {
LAB_051b4808:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        fVar6 = *(float *)(*(long *)(unaff_x20 + 0xd0) + 0xd8);
        lVar4 = *unaff_x19;
        fVar6 = (fVar5 - fVar6) / (unaff_s9 - fVar6);
        fVar5 = fVar6;
        if (unaff_s9 < fVar6) {
          fVar5 = unaff_s9;
        }
        if (fVar6 < 0.0) {
          fVar5 = unaff_s8;
        }
        if (lVar4 == 0) goto LAB_051b4808;
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) {
LAB_051b480c:
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c84();
        }
        *(float *)(lVar4 + unaff_x21 * 4 + 0x20) = fVar5;
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        iVar1 = FUN_051cd8c0();
        if (iVar1 == 2) {
          lVar4 = *unaff_x19;
          if (lVar4 == 0) goto LAB_051b4808;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_051b480c;
          fVar5 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
          unaff_x26 = 1;
          if (fVar5 <= unaff_s10) {
            unaff_s10 = fVar5;
          }
        }
        else {
          if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_051b4808;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          iVar1 = FUN_051cd8c0();
          lVar4 = *unaff_x19;
          if (iVar1 == 1) {
            if (lVar4 == 0) goto LAB_051b4808;
            if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_051b480c;
            fVar5 = *(float *)(lVar4 + unaff_x21 * 4 + 0x20);
            if (unaff_s11 <= fVar5) {
              unaff_s11 = fVar5;
            }
          }
          else if (lVar4 == 0) goto LAB_051b4808;
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_051b480c;
        uVar3 = unaff_w25 << (ulong)((uint)unaff_x21 & 0x1f);
        if (*(float *)(lVar4 + unaff_x21 * 4 + 0x20) <= 0.0) {
          uVar3 = *(uint *)(unaff_x20 + 0x158) & (uVar3 ^ 0xffffffff);
        }
        else {
          uVar3 = *(uint *)(unaff_x20 + 0x158) | uVar3;
        }
        *(uint *)(unaff_x20 + 0x158) = uVar3;
        while( true ) {
          unaff_x21 = unaff_x21 + 1;
          if (unaff_x21 == 5) {
            if ((unaff_x26 & 1) == 0) {
              unaff_s10 = unaff_s11;
            }
            return unaff_s10;
          }
          if (*(long *)(unaff_x20 + 0xd0) == 0) goto LAB_051b4808;
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          iVar1 = FUN_051cd8c0();
          if (iVar1 != 0) break;
          lVar4 = *unaff_x19;
          if (lVar4 == 0) goto LAB_051b4808;
          if (*(uint *)(lVar4 + 0x18) <= unaff_x21) goto LAB_051b480c;
          *(undefined4 *)(lVar4 + unaff_x21 * 4 + 0x20) = 0;
        }
        unaff_x22 = *(long **)(unaff_x20 + 0x130);
        if (unaff_x22 == (long *)0x0) goto LAB_051b4808;
        param_1 = *unaff_x22;
        param_3 = *unaff_x24;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_ZR = *(long *)(in_x10 + -2) == param_3;
  } while( true );
}


