/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 03117f8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03118258) */

void OVREyeGaze__OnPermissionGranted
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int *in_x10;
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
  
code_r0x03117f8c:
  puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
  do {
    uVar3 = (*(code *)*puVar4)(unaff_x21,puVar4[1]);
    if ((uVar3 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01afa9e0(unaff_x21,
                                          *(undefined8 *)
                                           Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                         );
      if (plVar5 != (long *)0x0) {
        lVar7 = *plVar5;
        uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar3 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_03118198;
            }
            uVar3 = uVar3 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_01ae9f78(plVar5,*(long *)
                                      Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,0)
        ;
LAB_03118198:
        (*(code *)*puVar4)(plVar5,puVar4[1]);
      }
      unaff_w20 = unaff_w20 + 1;
      if (unaff_w20 == 0x18) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_03118254:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      unaff_x22 = FUN_02b59714(*(long *)(unaff_x19 + 0x28),unaff_w20,*(undefined8 *)PTR_DAT_03d7f118
                              );
      if ((*(long *)(unaff_x19 + 0x20) == 0) ||
         (lVar7 = FUN_03172be8(*(long *)(unaff_x19 + 0x20),unaff_w20,0), lVar7 == 0))
      goto LAB_03118254;
      unaff_x21 = (long *)FUN_0392a954(lVar7,0);
    }
    else {
      lVar7 = *unaff_x21;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03117ff8;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x21,*unaff_x26,1);
LAB_03117ff8:
      plVar5 = (long *)(*(code *)*puVar4)(unaff_x21,puVar4[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(plVar5);
      }
      uVar6 = FUN_039230bc(plVar5,0);
      uVar3 = FUN_02ee6670(uVar6,*unaff_x28,0);
      if ((uVar3 & 1) == 0) {
        fVar10 = (float)FUN_03928280(plVar5,0);
        fVar11 = (float)FUN_0392a7f0(plVar5,0);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        lVar7 = *(long *)(unaff_x22 + 0x10);
        lVar8 = *unaff_x29;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar2 = *(uint *)(unaff_x22 + 0x18);
        fVar12 = unaff_s12 * param_3;
        param_3 = unaff_s12 * param_4;
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          lVar7 = lVar7 + (int)uVar2 * unaff_x24;
          *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
          *(float *)(lVar7 + 0x20) = unaff_s12 * fVar10;
          *(float *)(lVar7 + 0x24) = fVar12;
          *(float *)(lVar7 + 0x28) = param_3;
          *(float *)(lVar7 + 0x2c) = fVar11 * unaff_s11;
          *(int *)(lVar7 + 0x30) = unaff_w20;
          param_4 = fVar12;
        }
        else {
          fStack0000000000000008 = unaff_s12 * fVar10;
          fStack000000000000000c = fVar12;
          fStack0000000000000010 = param_3;
          fStack0000000000000014 = fVar11 * unaff_s11;
          in_stack_00000018 = unaff_w20;
          FUN_02b1c4e4(unaff_x22,&stack0x00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          param_4 = fVar12;
        }
        uVar6 = FUN_0391c2b8(plVar5,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_03923a90(uVar6,0);
      }
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    param_1 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar3 != 0) {
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(in_x10 + -2) == *unaff_x26) goto code_r0x03117f8c;
        uVar3 = uVar3 - 1;
        in_x10 = in_x10 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78(unaff_x21,*unaff_x26,0);
  } while( true );
}


