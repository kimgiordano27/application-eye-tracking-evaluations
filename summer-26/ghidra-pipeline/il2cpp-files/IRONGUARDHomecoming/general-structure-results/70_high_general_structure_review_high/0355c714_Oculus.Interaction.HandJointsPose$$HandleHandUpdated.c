/*
FUNCTION_NAME: Oculus.Interaction.HandJointsPose$$HandleHandUpdated
ENTRY_POINT: 0355c714
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


uint Oculus_Interaction_HandJointsPose__HandleHandUpdated(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  undefined4 *unaff_x19;
  long unaff_x20;
  int unaff_w22;
  uint uVar19;
  undefined4 unaff_w23;
  long unaff_x26;
  long unaff_x29;
  double dVar20;
  double dVar21;
  undefined8 uStack_10;
  undefined4 uStack_8;
  
  thunk_FUN_01efb3a4();
  *(undefined1 *)(unaff_x20 + 0x219) = 1;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  if (unaff_w22 == 0) {
LAB_0355cb74:
    FUN_035633f0();
  }
  else {
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(undefined4 *)(unaff_x29 + -0x4c) = 0x100;
    *(undefined4 *)(unaff_x29 + -0x48) = 0;
    *(undefined8 *)(unaff_x29 + -0x78) = 0;
    *(undefined8 *)(unaff_x29 + -0x80) = 0;
    *(undefined8 *)(unaff_x29 + -0x68) = 0;
    *(undefined8 *)(unaff_x29 + -0x70) = 0;
    *(undefined8 *)(unaff_x29 + -0x58) = 0;
    *(undefined8 *)(unaff_x29 + -0x60) = 0;
    uStack_8 = 0;
    uStack_10 = 0;
    FUN_03563234(unaff_x29 + -0x80,&uStack_10,0);
    if (*(long *)(unaff_x29 + -0x30) == 0) goto LAB_0355cdfc;
    lVar12 = FUN_0350b874(*(long *)(unaff_x29 + -0x30),0);
    if ((*(long *)(unaff_x29 + -0x30) == 0) ||
       (uVar13 = FUN_0350bfdc(*(long *)(unaff_x29 + -0x30),0), lVar12 == 0)) goto LAB_0355cdfc;
    bVar8 = FUN_0340e080(lVar12,uVar13,4,0);
    *(byte *)(unaff_x29 + -0x58) = bVar8 & 1;
    puVar6 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_26__;
    if (*(long *)(unaff_x29 + -0x30) == 0) goto LAB_0355cdfc;
    plVar16 = (long *)(unaff_x19 + 0xc);
    *plVar16 = *(long *)(*(long *)(unaff_x29 + -0x30) + 0x78);
    unaff_x19[8] = 0;
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar7 = Method_Unity_VisualScripting_AdditionHandler_<>c_<_ctor>b__0_43__;
    FUN_03561580(unaff_x29 + -0xb0);
    FUN_0356164c(unaff_x29 + -0xb0,0);
    uVar2 = *(undefined4 *)(unaff_x29 + -0x34);
    bVar4 = false;
    uVar11 = 0;
    do {
      do {
        uVar17 = unaff_w23;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_03558b80(uVar11,unaff_x29 + -0xb0,unaff_x29 + -0x50,unaff_x29 + -0x80);
        if ((uVar14 & 1) == 0) goto LAB_0355cb84;
        uVar9 = *(uint *)(unaff_x29 + -0x50);
        unaff_w23 = uVar2;
      } while (uVar9 == 0x12);
      if (*(int *)(unaff_x29 + -0x4c) != 0x100) {
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar14 = FUN_0355c1e4();
        if ((uVar14 & 1) == 0) goto LAB_0355cce8;
        uVar9 = *(uint *)(unaff_x29 + -0x50);
        *(undefined4 *)(unaff_x29 + -0x4c) = 0x100;
      }
      if (uVar9 == 0x13) {
        if ((uVar11 & 0xfffffffe) != 0xc) goto LAB_0355cce8;
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_0355ce08(unaff_x29 + -0x80,unaff_x29 + -0xb0,uVar17);
        goto LAB_0355cb88;
      }
      if ((*(byte *)(unaff_x29 + -0x58) & 1) == 0) {
        lVar12 = *(long *)puVar7;
        uVar19 = uVar11;
        goto LAB_0355c9b8;
      }
      uVar1 = 3;
      if (uVar11 != 0x12) {
        uVar1 = uVar11;
      }
      uVar19 = 5;
      if (uVar1 != 0x13) {
        uVar19 = uVar1;
      }
      if ((uVar9 & 0xfffffffd) != 0xc && uVar9 != 0xd) {
        uVar19 = uVar11;
      }
      if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      bVar8 = FUN_035616f8(unaff_x29 + -0xb0,0);
      lVar12 = *(long *)puVar7;
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar7;
      }
      lVar18 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar18 == 0) goto LAB_0355cdfc;
      if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_0355ce00;
      lVar18 = *(long *)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_0355cdfc;
      uVar11 = *(uint *)(unaff_x29 + -0x50);
      if (*(uint *)(lVar18 + 0x18) <= uVar11) goto LAB_0355ce00;
      if ((*(int *)(lVar18 + (long)(int)uVar11 * 4 + 0x20) != 0x14 & (bVar8 ^ 0xff)) == 0) {
        switch(uVar11) {
        case 4:
        case 5:
          uVar17 = 3;
          if ((bVar8 & 1) != 0) {
            uVar17 = 1;
          }
          break;
        default:
          goto LAB_0355c9b8;
        case 8:
          uVar17 = 6;
          if ((bVar8 & 1) == 0) {
            uVar17 = 7;
          }
          break;
        case 0xd:
          uVar17 = 0xe;
          if ((bVar8 & 1) == 0) {
            uVar17 = 0xc;
          }
        }
        *(undefined4 *)(unaff_x29 + -0x50) = uVar17;
      }
LAB_0355c9b8:
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(lVar12);
        lVar12 = *(long *)puVar7;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
      if (lVar12 == 0) goto LAB_0355cdfc;
      if (*(uint *)(lVar12 + 0x18) <= uVar19) {
LAB_0355ce00:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      lVar12 = *(long *)(lVar12 + (long)(int)uVar19 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_0355cdfc;
      if (*(uint *)(lVar12 + 0x18) <= *(uint *)(unaff_x29 + -0x50)) goto LAB_0355ce00;
      uVar11 = *(uint *)(lVar12 + (long)(int)*(uint *)(unaff_x29 + -0x50) * 4 + 0x20);
      if (uVar11 == 0x14) goto LAB_0355cce8;
      if (0x14 < (int)uVar11) {
        if (*(long *)(unaff_x29 + -0x30) == 0) goto LAB_0355cdfc;
        uVar9 = FUN_0350c348(*(long *)(unaff_x29 + -0x30),0);
        puVar5 = 
        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
        if ((uVar9 >> 3 & 1) == 0) {
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar14 = FUN_03559934(uVar11);
joined_r0x0355cae4:
          if ((uVar14 & 1) == 0) goto LAB_0355cb84;
        }
        else {
          if (*(int *)(*(long *)
                        Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                      + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if (DAT_04833019 == '\0') {
            thunk_FUN_01efb3a4(puVar5);
            DAT_04833019 = '\x01';
          }
          lVar12 = *(long *)puVar5;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar12 = *(long *)puVar5;
          }
          if (**(char **)(lVar12 + 0xb8) == '\0') {
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_0355c2dc(uVar11);
            goto joined_r0x0355cae4;
          }
        }
        uVar11 = 0;
        bVar4 = true;
      }
    } while ((6 < *(uint *)(unaff_x29 + -0x50)) ||
            ((1 << (ulong)(*(uint *)(unaff_x29 + -0x50) & 0x1f) & 0x43U) == 0));
    if (!bVar4) goto LAB_0355cce8;
    uVar13 = *(undefined8 *)(unaff_x29 + -0x30);
    if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0355bc58(uVar13,unaff_x29 + -0x80);
    if (*(int *)(unaff_x29 + -100) == -1) {
LAB_0355cc04:
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar14 = FUN_0355d414();
      if ((uVar14 & 1) != 0) {
        plVar15 = (long *)*plVar16;
        if (plVar15 == (long *)0x0) goto LAB_0355cdfc;
        uVar14 = (**(code **)(*plVar15 + 0x2a8))
                           (plVar15,*unaff_x19,unaff_x19[1],unaff_x19[2],unaff_x19[3],unaff_x19[4],
                            unaff_x19[5],0,unaff_x19[8],unaff_x29 + -0x40,
                            *(undefined8 *)(*plVar15 + 0x2b0));
        if ((uVar14 & 1) == 0) goto LAB_0355cb74;
        dVar21 = *(double *)(unaff_x29 + -0x60);
        if (0.0 < dVar21) {
          if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0
             ) {
            thunk_FUN_01ee6d7c();
          }
          dVar21 = dVar21 * DAT_00c8df08;
          dVar20 = modf(dVar21,(double *)(unaff_x29 + -0x28));
          if (0.0 <= dVar21) {
            if (dVar20 == 0.5) {
              dVar21 = *(double *)(unaff_x29 + -0x28);
              dVar20 = 1.0;
              goto LAB_0355cd2c;
            }
            dVar21 = (double)(long)(dVar21 + 0.5);
          }
          else if (dVar20 == -0.5) {
            dVar21 = *(double *)(unaff_x29 + -0x28);
            dVar20 = -1.0;
LAB_0355cd2c:
            if (((long)dVar21 & 1U) != 0) {
              dVar21 = dVar21 + dVar20;
            }
          }
          else {
            dVar21 = (double)(long)(dVar21 + -0.5);
          }
          if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0
                      ) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar12 = -0x8000000000000000;
          if (dVar21 != INFINITY) {
            lVar12 = (long)dVar21;
          }
          uVar13 = FUN_0354cd34(unaff_x29 + -0x40,lVar12);
          *(undefined8 *)(unaff_x29 + -0x40) = uVar13;
        }
        iVar3 = *(int *)(unaff_x29 + -0x6c);
        if (iVar3 != -1) {
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
LAB_0355cdfc:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar10 = (**(code **)(*plVar16 + 0x1f8))
                             (plVar16,*(undefined8 *)(unaff_x29 + -0x40),
                              *(undefined8 *)(*plVar16 + 0x200));
          if (iVar3 != iVar10) goto LAB_0355cb74;
        }
        *(undefined8 *)(unaff_x19 + 0xe) = *(undefined8 *)(unaff_x29 + -0x40);
        if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar11 = FUN_0355d69c(unaff_x29 + -0xb0);
        goto LAB_0355cb88;
      }
    }
    else {
      uVar11 = unaff_x19[3];
      if (*(int *)(unaff_x29 + -100) == 0) {
        if (uVar11 < 0xd) {
          uVar9 = 0;
          if (uVar11 != 0xc) {
            uVar9 = uVar11;
          }
LAB_0355cc00:
          unaff_x19[3] = uVar9;
          goto LAB_0355cc04;
        }
      }
      else if (uVar11 < 0x18) {
        if ((int)uVar11 < 0xc) {
          uVar9 = uVar11 + 0xc;
          goto LAB_0355cc00;
        }
        goto LAB_0355cc04;
      }
LAB_0355cce8:
      FUN_035633a0();
    }
  }
LAB_0355cb84:
  uVar11 = 0;
LAB_0355cb88:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
    return uVar11 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


