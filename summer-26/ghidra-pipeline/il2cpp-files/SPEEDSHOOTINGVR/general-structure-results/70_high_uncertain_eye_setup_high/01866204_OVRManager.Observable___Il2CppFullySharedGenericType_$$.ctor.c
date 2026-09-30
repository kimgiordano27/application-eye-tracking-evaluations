/*
FUNCTION_NAME: OVRManager.Observable<__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 01866204
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_Observable<__Il2CppFullySharedGenericType>___ctor(void)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x19;
  int unaff_w20;
  int iVar9;
  undefined8 *unaff_x21;
  int unaff_w22;
  undefined8 unaff_x24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  long in_stack_00000028;
  long *in_stack_00000030;
  undefined8 in_stack_00000038;
  int in_stack_00000040;
  undefined8 in_stack_00000048;
  
  uVar2 = in_stack_00000020;
  do {
    thunk_FUN_01022c14();
    do {
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
      if (unaff_x28 == 0) {
LAB_01866560:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      FUN_021af390(unaff_x28,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x38),0);
      do {
        if (*unaff_x25 == 0) goto LAB_01866560;
        FUN_0198efa4(*unaff_x25,*unaff_x27,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x80));
        lVar4 = *unaff_x25;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x90) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar5 = thunk_FUN_010400dc();
        UnityEngine_UIElements_KeyboardEventBase<object>__get_altKey
                  (uVar5,unaff_x26,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x88),
                   *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x98));
        if (lVar4 == 0) goto LAB_01866560;
        FUN_0198ebc8(lVar4,uVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa0));
        lVar4 = *unaff_x25;
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xb0) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        uVar5 = thunk_FUN_010400dc();
        FUN_016065a0(uVar5,unaff_x26,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xa8),
                     *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xb8));
        FUN_011ac314(lVar4,uVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xc0));
        lVar4 = *in_stack_00000030;
        if (lVar4 == 0) goto LAB_01866560;
        uVar5 = *(undefined8 *)(unaff_x26 + 0x30);
        lVar6 = *(long *)(lVar4 + 0x10);
        lVar8 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0xd0);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_01866560;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar5;
          thunk_FUN_0106e12c(puVar7);
        }
        else {
          FUN_017d3030(lVar4,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (unaff_w20 == 0) {
          lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_0103c244();
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01022c14();
          }
          lVar4 = FUN_01ac1638(unaff_x24,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
          if (lVar4 == 0) goto LAB_01866560;
          in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
          uVar5 = FUN_021b39ec(&stack0x00000048,*unaff_x25,0);
        }
        else {
          if (unaff_x29 == 0) goto LAB_01866560;
          uVar5 = FUN_021b3938(unaff_x29,*unaff_x25,0);
        }
        unaff_w22 = unaff_w22 + 1;
        bVar3 = false;
        unaff_x21 = unaff_x21 + 4;
        if (in_stack_00000038._4_4_ == unaff_w22) {
          do {
            iVar9 = in_stack_00000008._4_4_;
            if ((uVar2 & 1) == 0) {
              do {
                if (unaff_w20 == 0) {
                  lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
                  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_0103c244();
                  }
                  if (*(int *)(lVar4 + 0xe0) == 0) {
                    thunk_FUN_01022c14();
                  }
                  lVar4 = FUN_01ac1638(unaff_x24,
                                       *(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
                  if (lVar4 == 0) goto LAB_01866560;
                  in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
                  uVar5 = FUN_01865c8c(lVar4,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
                  uVar5 = FUN_021b39ec(&stack0x00000048,uVar5,0);
                }
                else {
                  uVar5 = FUN_01865c8c(uVar5,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xd8));
                  if (unaff_x29 == 0) goto LAB_01866560;
                  uVar5 = FUN_021b3938(unaff_x29,uVar5,0);
                }
                bVar3 = iVar9 != -1;
                iVar9 = iVar9 + 1;
              } while (bVar3);
            }
            if (unaff_w20 != 0) {
              lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x10);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0103c244();
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              lVar4 = FUN_01ac1638(unaff_x24,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x20));
              if (lVar4 == 0) goto LAB_01866560;
              in_stack_00000048 = *(undefined8 *)(lVar4 + 0x378);
              uVar5 = FUN_021b39ec(&stack0x00000048,unaff_x29,0);
            }
            in_stack_00000020._4_4_ = in_stack_00000020._4_4_ + 1;
            in_stack_00000040 = in_stack_00000040 + in_stack_00000038._4_4_;
            if (in_stack_00000020._4_4_ == in_stack_00000018._4_4_) {
              FUN_01866568(unaff_x24,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0xe0));
              return;
            }
            if (unaff_w20 == 0) {
              unaff_x29 = 0;
            }
            else {
              unaff_x29 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0234bed8);
              FUN_021acc50(unaff_x29,0);
              lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0103c244();
              }
              if (*(int *)(lVar4 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
              if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_0103c244();
              }
              if (unaff_x29 == 0) goto LAB_01866560;
              uVar5 = FUN_021af390(unaff_x29,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x28),0);
            }
          } while (in_stack_00000020._4_4_ * in_stack_00000038._4_4_ + in_stack_00000038._4_4_ <=
                   in_stack_00000020._4_4_ * in_stack_00000038._4_4_);
          unaff_w22 = 0;
          bVar3 = true;
          unaff_x21 = (undefined8 *)(in_stack_00000010 + (long)in_stack_00000040 * 0x20);
        }
        if ((*(byte *)(*(long *)(*(long *)(*unaff_x19 + 0xc0) + 0x50) + 0x135) & 1) == 0) {
          FUN_0103c244();
        }
        unaff_x26 = thunk_FUN_010400dc();
        FUN_01303218(unaff_x26,*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x58));
        if (unaff_x26 == 0) goto LAB_01866560;
        *(undefined8 *)(unaff_x26 + 0x38) = unaff_x24;
        thunk_FUN_0106e12c((undefined8 *)(unaff_x26 + 0x38),unaff_x24);
        if (in_stack_00000028 == 0) goto LAB_01866560;
        if (*(uint *)(in_stack_00000028 + 0x18) <= (uint)(in_stack_00000040 + unaff_w22)) {
                    /* WARNING: Subroutine does not return */
          FUN_00fdc53c();
        }
        uVar11 = *unaff_x21;
        uVar10 = unaff_x21[3];
        uVar5 = unaff_x21[2];
        unaff_x27 = (undefined8 *)(unaff_x26 + 0x10);
        *(undefined8 *)(unaff_x26 + 0x18) = unaff_x21[1];
        *(undefined8 *)(unaff_x26 + 0x10) = uVar11;
        *(undefined8 *)(unaff_x26 + 0x28) = uVar10;
        *(undefined8 *)(unaff_x26 + 0x20) = uVar5;
        thunk_FUN_0106e12c(unaff_x27,0);
        lVar4 = FUN_010f8634(*(undefined8 *)(*(long *)(*unaff_x19 + 0xc0) + 0x68));
        if (lVar4 == 0) goto LAB_01866560;
        FUN_021ac820(lVar4,*(undefined8 *)(unaff_x26 + 0x18),0);
        unaff_x25 = (long *)(unaff_x26 + 0x30);
        *unaff_x25 = lVar4;
        thunk_FUN_0106e12c(unaff_x25,lVar4);
        if (*unaff_x25 == 0) goto LAB_01866560;
        FUN_0216b764(*unaff_x25,1,0);
        lVar6 = *unaff_x25;
        lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_0103c244();
        }
        if (lVar6 == 0) goto LAB_01866560;
        FUN_021af390(lVar6,*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30),0);
      } while (!bVar3);
      unaff_x28 = *unaff_x25;
      lVar4 = *(long *)(*(long *)(*unaff_x19 + 0xc0) + 8);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_0103c244();
      }
    } while (*(int *)(lVar4 + 0xe0) != 0);
  } while( true );
}


