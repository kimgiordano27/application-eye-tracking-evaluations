/*
FUNCTION_NAME: OVRSceneModelLoader$$<RequestScenePermissionAsync>g__RequestPermissionOnAndroid|9_0
ENTRY_POINT: 01dd223c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


int OVRSceneModelLoader__<RequestScenePermissionAsync>g__RequestPermissionOnAndroid_9_0(void)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long *unaff_x19;
  long lVar10;
  int unaff_w20;
  uint *unaff_x22;
  uint *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *unaff_x26;
  long *in_stack_00000008;
  uint *in_stack_00000018;
  
  puVar11 = unaff_x22;
  if (unaff_x19 == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    if (*unaff_x19 != *(long *)PTR_DAT_0235b0e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
    uVar12 = *(uint *)(unaff_x19 + 7);
    if (unaff_x19[3] != 0) {
      plVar5 = (long *)FUN_01dc1d00();
      if (plVar5 == (long *)0x0) {
LAB_01dd2744:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      iVar4 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (0 < iVar4) {
        uVar6 = (**(code **)(*in_stack_00000008 + 0x1b8))
                          (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
        FUN_00e5db80();
        lVar10 = unaff_x19[2];
        FUN_00e5db80(lVar10);
        uVar7 = thunk_FUN_0105d828(lVar10,0);
        uVar8 = thunk_FUN_010303a8(PTR_DAT_0235ab18);
        uVar6 = FUN_01c433dc(uVar8,uVar6,uVar7,0);
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar7 = thunk_FUN_010400dc();
        FUN_01c65ad0(uVar7,uVar6,0);
        uVar6 = thunk_FUN_010303a8(PTR_DAT_0235b0f0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar7,uVar6);
      }
      plVar5[4] = (long)unaff_x19;
      plVar5[2] = (long)unaff_x22;
      plVar5[3] = (long)unaff_x26;
      thunk_FUN_0106e12c(plVar5 + 4);
      *(undefined2 *)(plVar5 + 5) = 0;
      *(undefined1 *)((long)plVar5 + 0x2a) = 0;
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      plVar1 = (long *)PTR_DAT_023531b0;
      goto LAB_01dd22d0;
    }
  }
  plVar5 = (long *)0x0;
  plVar1 = (long *)PTR_DAT_023531b0;
LAB_01dd22d0:
  do {
    puVar13 = puVar11;
    if (puVar11 < unaff_x26) {
      if ((int)uVar12 < 1) {
        if (plVar5 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
          if (uVar3 != 0) goto LAB_01dd244c;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        puVar13 = (uint *)((long)puVar11 + 2);
        uVar12 = (uint)(ushort)*puVar11;
        goto LAB_01dd2450;
      }
      uVar2 = *puVar11;
      if (*(int *)(*plVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      unaff_w20 = unaff_w20 + 1;
      if ((ushort)((ushort)uVar2 >> 10) == 0x37) {
        puVar11 = (uint *)((long)puVar11 + 2);
LAB_01dd236c:
        uVar12 = 0xfffd;
      }
    }
    else {
      if (uVar12 == 0) {
        if (plVar5 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
          *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
          if (uVar3 != 0) goto LAB_01dd244c;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
LAB_01dd26cc:
        if (-1 < unaff_w20) {
          return unaff_w20;
        }
LAB_01dd26f4:
        thunk_FUN_010303a8(PTR_DAT_0234bcd0);
        uVar6 = thunk_FUN_010400dc();
        uVar7 = thunk_FUN_010303a8(PTR_DAT_0235b0e8);
        FUN_01c65ad0(uVar6,uVar7,0);
        uVar7 = thunk_FUN_010303a8(PTR_DAT_0235b0f0);
                    /* WARNING: Subroutine does not return */
        FUN_00fdc400(uVar6,uVar7);
      }
      if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x2a) != '\0')) {
        uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
        *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
        if (uVar3 == 0) {
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        if (*(int *)(*plVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        if ((uVar3 & 0xfc00) != 0xdc00) {
          if (uVar3 != 0) goto LAB_01dd244c;
          goto LAB_01dd26cc;
        }
        unaff_w20 = unaff_w20 + 2;
        goto LAB_01dd236c;
      }
      if (((int)uVar12 < 1) || ((unaff_x19 != (long *)0x0 && ((char)unaff_x19[6] == '\0'))))
      goto LAB_01dd26cc;
      unaff_w20 = unaff_w20 + 1;
    }
    do {
      if (*(int *)(*plVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if (uVar12 >> 0xb == 0x1b) {
        if (plVar5 == (long *)0x0) {
          if (unaff_x19 == (long *)0x0) {
            plVar5 = (long *)in_stack_00000008[5];
            if (plVar5 == (long *)0x0) goto LAB_01dd2744;
            plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180))
            ;
          }
          else {
            plVar5 = (long *)FUN_01dc1d00();
          }
          if (plVar5 == (long *)0x0) goto LAB_01dd2744;
          plVar5[4] = (long)unaff_x19;
          plVar5[2] = (long)unaff_x22;
          plVar5[3] = (long)unaff_x26;
          thunk_FUN_0106e12c(plVar5 + 4);
          *(undefined2 *)(plVar5 + 5) = 0;
          *(undefined1 *)((long)plVar5 + 0x2a) = 0;
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
        }
        in_stack_00000018 = puVar11;
        (**(code **)(*plVar5 + 0x1d8))
                  (plVar5,uVar12,&stack0x00000018,*(undefined8 *)(*plVar5 + 0x1e0));
        uVar12 = 0;
        puVar13 = in_stack_00000018;
        break;
      }
      iVar4 = unaff_w20;
      if (0x7ff < (int)uVar12) {
        iVar4 = unaff_w20 + 1;
      }
      if (0x7f < (int)uVar12) {
        unaff_w20 = iVar4 + 1;
      }
      if (unaff_w20 < 0) goto LAB_01dd26f4;
      if (plVar5 == (long *)0x0) {
LAB_01dd2478:
        if (*(int *)(*plVar1 + 0xe0) == 0) {
          thunk_FUN_01022c14();
        }
        if (0x1b < (uint)((long)unaff_x26 - (long)puVar11)) {
          puVar13 = (uint *)((long)puVar11 + (((long)unaff_x26 - (long)puVar11 & 0x1ffffffeU) - 0xe)
                            );
          goto LAB_01dd24a0;
        }
        do {
          if (unaff_x26 <= puVar11) goto LAB_01dd26cc;
          puVar13 = (uint *)((long)puVar11 + 2);
          uVar12 = (uint)(ushort)*puVar11;
          puVar11 = puVar13;
        } while (uVar12 < 0x80);
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
        *(bool *)((long)plVar5 + 0x2a) = uVar3 != 0;
        puVar13 = puVar11;
        if (uVar3 == 0) {
          *(undefined4 *)((long)plVar5 + 0x2c) = 0;
          goto LAB_01dd2478;
        }
LAB_01dd244c:
        uVar12 = (uint)uVar3;
        unaff_w20 = unaff_w20 + 1;
      }
LAB_01dd2450:
      if (*(int *)(*plVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      puVar11 = puVar13;
    } while ((uVar12 & 0xfc00) != 0xd800);
    unaff_w20 = unaff_w20 + -1;
    puVar11 = puVar13;
  } while( true );
LAB_01dd24a0:
  uVar12 = 0;
  if (puVar11 < puVar13) {
    uVar3 = (ushort)*puVar11;
    puVar9 = (uint *)((long)puVar11 + 2);
    if (uVar3 < 0x80) {
LAB_01dd24d8:
      if (((uint)puVar9 >> 1 & 1) == 0) goto OVRSceneModelLoader__OnNoSceneModelToLoad;
      uVar3 = *(ushort *)((long)puVar11 + 2);
      puVar9 = puVar11 + 1;
      if (uVar3 < 0x80) goto OVRSceneModelLoader__OnNoSceneModelToLoad;
      if (0x7ff < uVar3) {
        if ((uVar3 & 0xf800) == 0xd800) goto LAB_01dd2500;
        unaff_w20 = unaff_w20 + 1;
      }
      unaff_w20 = unaff_w20 + 1;
OVRSceneModelLoader__OnNoSceneModelToLoad:
      do {
        if (puVar13 <= puVar9) {
          uVar12 = 0;
          puVar11 = puVar9;
          goto LAB_01dd22d0;
        }
        uVar12 = *puVar9;
        uVar2 = puVar9[1];
        if (((uVar2 | uVar12) & 0xff80ff80) != 0) {
          if (((uVar2 | uVar12) & 0xf800f800) != 0) goto LAB_01dd25a4;
          if (uVar12 >> 0x17 != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if ((uVar12 & 0xff80) != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if (uVar2 >> 0x17 != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if ((uVar2 & 0xff80) != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
        }
        uVar12 = puVar9[2];
        uVar2 = puVar9[3];
        if (((uVar2 | uVar12) & 0xff80ff80) != 0) {
          if (((uVar2 | uVar12) & 0xf800f800) != 0) goto LAB_01dd25a0;
          if (uVar12 >> 0x17 != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if ((uVar12 & 0xff80) != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if (uVar2 >> 0x17 != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
          if ((uVar2 & 0xff80) != 0) {
            unaff_w20 = unaff_w20 + 1;
          }
        }
        puVar9 = puVar9 + 4;
      } while( true );
    }
    if (uVar3 < 0x800) {
LAB_01dd24d4:
      unaff_w20 = unaff_w20 + 1;
      goto LAB_01dd24d8;
    }
    if ((uVar3 & 0xf800) != 0xd800) {
      unaff_w20 = unaff_w20 + 1;
      goto LAB_01dd24d4;
    }
LAB_01dd2500:
    uVar12 = (uint)uVar3;
    puVar11 = puVar9;
    goto LAB_01dd25bc;
  }
  goto LAB_01dd22d0;
LAB_01dd25a0:
  puVar9 = puVar9 + 2;
LAB_01dd25a4:
  uVar12 = uVar12 & 0xffff;
  puVar11 = (uint *)((long)puVar9 + 2);
  if (uVar12 < 0x80) goto LAB_01dd24a0;
  if (0x7ff < uVar12) {
LAB_01dd25bc:
    if (*(int *)(*plVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    if ((uVar12 & 0xf800) == 0xd800) {
      if (0x36 < uVar12 >> 10) {
LAB_01dd26bc:
        uVar12 = 0;
        puVar11 = (uint *)((long)puVar11 + -2);
        goto LAB_01dd22d0;
      }
      uVar12 = *puVar11;
      if (*(int *)(*plVar1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
      }
      if ((ushort)((ushort)uVar12 >> 10) != 0x37) goto LAB_01dd26bc;
      puVar11 = (uint *)((long)puVar11 + 2);
    }
    unaff_w20 = unaff_w20 + 1;
  }
  unaff_w20 = unaff_w20 + 1;
  goto LAB_01dd24a0;
}


