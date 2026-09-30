/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.NGO.AutoMatchmakingNGO.<HeartbeatLobbyCoroutine>d__12$$System.IDisposable.Dispose
ENTRY_POINT: 06e12944
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_MultiplayerBlocks_NGO_AutoMatchmakingNGO_<HeartbeatLobbyCoroutine>d__12__System_IDisposable_Dispose
                 (void)

{
  byte bVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint in_w8;
  undefined8 *puVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  int iVar8;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  uint unaff_w29;
  ushort uStack0000000000000008;
  undefined2 uStack000000000000000c;
  
  do {
    if ((bool)in_ZR || in_NG != in_OV) {
      if (in_w8 != 0x3a) {
        if (in_w8 != 0x5b) goto LAB_06e12bd0;
        if ((unaff_w29 & 1) != 0) goto LAB_06e12c28;
        thunk_FUN_03cf5234(*unaff_x25);
        FUN_06e13fcc();
        if (unaff_x20 != 0) goto LAB_06e12a38;
LAB_06e12ef8:
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((unaff_w29 & 1) != 0) goto LAB_06e12c28;
      unaff_w29 = 0;
      unaff_x23 = unaff_x24;
      unaff_x24 = *unaff_x27;
      iVar8 = unaff_w22;
    }
    else {
      if (in_w8 != 0x5c) {
        if (in_w8 != 0x5d) goto LAB_06e12bd0;
        goto LAB_06e12b18;
      }
      iVar8 = unaff_w22 + 1;
      if ((unaff_w29 & 1) == 0) {
        unaff_w29 = 0;
        unaff_x27 = (long *)PTR_DAT_08e69460;
        goto LAB_06e12e94;
      }
      uStack0000000000000008 = FUN_06f6fafc();
      if (uStack0000000000000008 < 0x67) {
        puVar7 = (undefined8 *)PTR_DAT_08e92e40;
        if ((uStack0000000000000008 != 0x62) &&
           (puVar7 = (undefined8 *)PTR_DAT_08e92e48, uStack0000000000000008 != 0x66))
        goto switchD_06e12d00_caseD_6f;
        goto LAB_06e12dd4;
      }
      switch(uStack0000000000000008) {
      case 0x6e:
        puVar7 = (undefined8 *)PTR_DAT_08e779a0;
        break;
      default:
switchD_06e12d00_caseD_6f:
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar4 = FUN_07059e90(&stack0x00000008,0);
        goto LAB_06e12dd8;
      case 0x72:
        puVar7 = (undefined8 *)PTR_DAT_08e903f0;
        break;
      case 0x74:
        puVar7 = (undefined8 *)PTR_DAT_08e90898;
        break;
      case 0x75:
        uVar4 = FUN_06f764fc();
        uStack000000000000000c = FUN_070fe244(uVar4,0x200,0);
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x28);
        }
        uVar4 = FUN_07059e90((long)&stack0x00000008 + 4,0);
        unaff_x24 = FUN_06f683f8(unaff_x24,uVar4,0);
        iVar8 = unaff_w22 + 5;
        unaff_w29 = 1;
        unaff_x27 = (long *)PTR_DAT_08e69460;
        goto LAB_06e12e94;
      }
LAB_06e12dd4:
      uVar4 = *puVar7;
LAB_06e12dd8:
      unaff_x24 = FUN_06f683f8(unaff_x24,uVar4,0);
      unaff_w29 = 1;
      unaff_x27 = (long *)PTR_DAT_08e69460;
    }
LAB_06e12e94:
    unaff_w22 = iVar8 + 1;
    if (*(int *)(unaff_x19 + 0x10) <= unaff_w22) {
      if ((unaff_w29 & 1) == 0) {
        return unaff_x21;
      }
      thunk_FUN_03ce5214(PTR_DAT_08e90ff8);
      uVar4 = thunk_FUN_03cf5234();
      puVar6 = PTR_DAT_08e92e50;
LAB_06e12f18:
      uVar5 = thunk_FUN_03ce5214(puVar6);
      FUN_06e14054(uVar4,uVar5);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e92e60);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar4,uVar5);
    }
    uVar2 = FUN_06f6fafc();
    if (uVar2 < 0x2d) {
      iVar8 = unaff_w22;
      if (uVar2 < 0x21) {
        if (0xc < uVar2) break;
        if (uVar2 == 9) goto LAB_06e12afc;
        if (uVar2 != 10) goto LAB_06e12bd0;
      }
      else {
        if (uVar2 != 0x22) {
          if (uVar2 != 0x2c) goto LAB_06e12bd0;
          if ((unaff_w29 & 1) != 0) goto LAB_06e12c28;
          uVar3 = FUN_06f74074(unaff_x24,*unaff_x27,0);
          if ((uVar3 & 1) != 0) {
            if (unaff_x21 != (long *)0x0) {
              bVar1 = *(byte *)(*unaff_x25 + 0x130);
              if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
                 (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x25)) {
                uVar4 = FUN_06e1373c(unaff_x24);
                (**(code **)(*unaff_x21 + 0x208))
                          (unaff_x21,uVar4,*(undefined8 *)(*unaff_x21 + 0x210));
                goto LAB_06e12e88;
              }
            }
            uVar3 = FUN_06f74074(unaff_x23,*unaff_x27,0);
            if ((uVar3 & 1) != 0) {
              uVar4 = FUN_06e1373c(unaff_x24);
              if (unaff_x21 == (long *)0x0) goto LAB_06e12ef8;
              (**(code **)(*unaff_x21 + 0x178))
                        (unaff_x21,unaff_x23,uVar4,*(undefined8 *)(*unaff_x21 + 0x180));
            }
          }
LAB_06e12e88:
          unaff_x23 = *unaff_x27;
          goto LAB_06e12e8c;
        }
        unaff_w29 = unaff_w29 ^ 1;
      }
      goto LAB_06e12e94;
    }
    if (0x5d < uVar2) {
      if (uVar2 == 0x7d) {
LAB_06e12b18:
        if ((unaff_w29 & 1) != 0) goto LAB_06e12c28;
        if (unaff_x20 == 0) goto LAB_06e12ef8;
        if (*(int *)(unaff_x20 + 0x18) == 0) {
          thunk_FUN_03ce5214(PTR_DAT_08e90ff8);
          uVar4 = thunk_FUN_03cf5234();
          puVar6 = PTR_DAT_08e92e58;
          goto LAB_06e12f18;
        }
        FUN_05aa0f7c();
        uVar3 = FUN_06f74074(unaff_x24,*unaff_x27,0);
        if ((uVar3 & 1) != 0) {
          if (unaff_x23 == 0) goto LAB_06e12ef8;
          uVar4 = FUN_06f78bac(unaff_x23,0);
          if (unaff_x21 != (long *)0x0) {
            bVar1 = *(byte *)(*unaff_x25 + 0x130);
            if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
               (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x25)) {
              uVar4 = FUN_06e1373c(unaff_x24);
              (**(code **)(*unaff_x21 + 0x208))(unaff_x21,uVar4,*(undefined8 *)(*unaff_x21 + 0x210))
              ;
              goto LAB_06e12d94;
            }
          }
          uVar3 = FUN_06f74074(uVar4,*unaff_x27,0);
          if ((uVar3 & 1) != 0) {
            uVar5 = FUN_06e1373c(unaff_x24);
            if (unaff_x21 == (long *)0x0) goto LAB_06e12ef8;
            (**(code **)(*unaff_x21 + 0x178))
                      (unaff_x21,uVar4,uVar5,*(undefined8 *)(*unaff_x21 + 0x180));
          }
        }
LAB_06e12d94:
        unaff_x23 = *unaff_x27;
        if (*(int *)(unaff_x20 + 0x18) < 1) goto LAB_06e12e8c;
        goto LAB_06e12da4;
      }
      if (uVar2 != 0x7b) goto LAB_06e12bd0;
      if ((unaff_w29 & 1) != 0) goto LAB_06e12c28;
      thunk_FUN_03cf5234(*unaff_x26);
      FUN_06e13f44();
      if (unaff_x20 == 0) goto LAB_06e12ef8;
LAB_06e12a38:
      FUN_05aa0fdc();
      uVar3 = FUN_06e137e8(unaff_x21,0);
      if ((uVar3 & 1) == 0) {
        if (unaff_x23 == 0) goto LAB_06e12ef8;
        uVar4 = FUN_06f78bac(unaff_x23,0);
        if (unaff_x21 != (long *)0x0) {
          bVar1 = *(byte *)(*unaff_x25 + 0x130);
          if ((bVar1 <= *(byte *)(*unaff_x21 + 0x130)) &&
             (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x25)) {
            uVar4 = FUN_05aa0f38();
            (**(code **)(*unaff_x21 + 0x208))(unaff_x21,uVar4,*(undefined8 *)(*unaff_x21 + 0x210));
            goto LAB_06e12d6c;
          }
        }
        uVar3 = FUN_06f74074(uVar4,*unaff_x27,0);
        if ((uVar3 & 1) != 0) {
          uVar5 = FUN_05aa0f38();
          if (unaff_x21 == (long *)0x0) goto LAB_06e12ef8;
          (**(code **)(*unaff_x21 + 0x178))
                    (unaff_x21,uVar4,uVar5,*(undefined8 *)(*unaff_x21 + 0x180));
        }
      }
LAB_06e12d6c:
      unaff_x23 = *unaff_x27;
LAB_06e12da4:
      unaff_x21 = (long *)FUN_05aa0f38();
LAB_06e12e8c:
      unaff_w29 = 0;
      unaff_x24 = unaff_x23;
      iVar8 = unaff_w22;
      goto LAB_06e12e94;
    }
    in_w8 = (uint)uVar2;
    in_OV = SBORROW4(in_w8,0x5b);
    in_NG = (int)(in_w8 - 0x5b) < 0;
    in_ZR = in_w8 == 0x5b;
  } while( true );
  if (uVar2 != 0xd) {
    if (uVar2 == 0x20) {
LAB_06e12afc:
      if ((unaff_w29 & 1) == 0) {
        unaff_w29 = 0;
      }
      else {
LAB_06e12c28:
        uStack000000000000000c = FUN_06f6fafc();
        if (*(int *)(*unaff_x28 + 0xe0) == 0) {
          thunk_FUN_03cd7500(*unaff_x28);
        }
        uVar4 = FUN_07059e90((long)&stack0x00000008 + 4,0);
        unaff_x24 = FUN_06f683f8(unaff_x24,uVar4,0);
        unaff_w29 = 1;
        iVar8 = unaff_w22;
      }
    }
    else {
LAB_06e12bd0:
      uStack000000000000000c = FUN_06f6fafc();
      if (*(int *)(*unaff_x28 + 0xe0) == 0) {
        thunk_FUN_03cd7500(*unaff_x28);
      }
      uVar4 = FUN_07059e90((long)&stack0x00000008 + 4,0);
      unaff_x24 = FUN_06f683f8(unaff_x24,uVar4,0);
      iVar8 = unaff_w22;
    }
  }
  goto LAB_06e12e94;
}


