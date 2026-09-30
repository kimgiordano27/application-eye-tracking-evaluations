/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 03118080
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03118258) */

void OVREyeGaze__Update(float param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int in_w10;
  int *piVar9;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float fStack0000000000000010;
  float fStack0000000000000014;
  int in_stack_00000018;
  
  do {
    lVar6 = *(long *)(unaff_x22 + 0x10);
    lVar8 = *unaff_x29;
    *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar2 = *(uint *)(unaff_x22 + 0x18);
    fVar10 = unaff_s12 * unaff_s9;
    unaff_s9 = unaff_s12 * unaff_s10;
    if (uVar2 < *(uint *)(lVar6 + 0x18)) {
      lVar6 = lVar6 + (int)uVar2 * unaff_x24;
      *(uint *)(unaff_x22 + 0x18) = uVar2 + 1;
      *(float *)(lVar6 + 0x20) = unaff_s12 * unaff_s8;
      *(float *)(lVar6 + 0x24) = fVar10;
      *(float *)(lVar6 + 0x28) = unaff_s9;
      *(float *)(lVar6 + 0x2c) = param_1 * unaff_s11;
      *(int *)(lVar6 + 0x30) = unaff_w20;
    }
    else {
      fStack0000000000000008 = unaff_s12 * unaff_s8;
      fStack000000000000000c = fVar10;
      fStack0000000000000010 = unaff_s9;
      fStack0000000000000014 = param_1 * unaff_s11;
      in_stack_00000018 = unaff_w20;
      FUN_02b1c4e4(unaff_x22,&stack0x00000008,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    uVar4 = FUN_0391c2b8(unaff_x23,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_03923a90(uVar4,0);
LAB_03117f48:
    do {
      if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_03117f98;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x21,*unaff_x26,0);
LAB_03117f98:
      uVar7 = (*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if ((uVar7 & 1) == 0) {
        plVar5 = (long *)thunk_FUN_01afa9e0(unaff_x21,
                                            *(undefined8 *)
                                             Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__
                                           );
        if (plVar5 != (long *)0x0) {
          lVar6 = *plVar5;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) ==
                  *(long *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__) {
                puVar3 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_03118198;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_01ae9f78(plVar5,*(long *)
                                        Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_19__,
                                0);
LAB_03118198:
          (*(code *)*puVar3)(plVar5,puVar3[1]);
        }
        unaff_w20 = unaff_w20 + 1;
        if (unaff_w20 == 0x18) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          unaff_x22 = FUN_02b59714(*(long *)(unaff_x19 + 0x28),unaff_w20,
                                   *(undefined8 *)PTR_DAT_03d7f118);
          if ((*(long *)(unaff_x19 + 0x20) != 0) &&
             (lVar6 = FUN_03172be8(*(long *)(unaff_x19 + 0x20),unaff_w20,0), lVar6 != 0)) {
            unaff_x21 = (long *)FUN_0392a954(lVar6,0);
            goto LAB_03117f48;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      lVar6 = *unaff_x21;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_03117ff8;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(unaff_x21,*unaff_x26,1);
LAB_03117ff8:
      unaff_x23 = (long *)(*(code *)*puVar3)(unaff_x21,puVar3[1]);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      bVar1 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*unaff_x23 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*unaff_x23 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(unaff_x23);
      }
      uVar4 = FUN_039230bc(unaff_x23,0);
      uVar7 = FUN_02ee6670(uVar4,*unaff_x28,0);
    } while ((uVar7 & 1) != 0);
    unaff_s8 = (float)FUN_03928280(unaff_x23,0);
    param_1 = (float)FUN_0392a7f0(unaff_x23,0);
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    in_w10 = *(int *)(unaff_x22 + 0x1c);
    unaff_s10 = fVar10;
  } while( true );
}


