/*
FUNCTION_NAME: ShadowGroveGames.LoginWithDiscord.Scripts.LoginWithDiscordScript$$LoginWithSession
ENTRY_POINT: 06b9dc98
PROGRAM: Waifu-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void ShadowGroveGames_LoginWithDiscord_Scripts_LoginWithDiscordScript__LoginWithSession
               (long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  int unaff_w19;
  long *unaff_x20;
  undefined8 uVar9;
  uint unaff_w21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870(param_1);
    }
    uVar5 = FUN_06b9e674(0xffffffff,unaff_w21);
                    /* try { // try from 06b9dcb4 to 06c9dcbf has its CatchHandler @ 06b9df50 */
    if ((uVar5 & 1) == 0) {
      lVar4 = unaff_x20[2];
      if (*(int *)(*(long *)(unaff_x22 + 0x648) + 0xe0) == 0) {
                    /* try { // try from 06b9dcc8 to 06c9dcd7 has its CatchHandler @ 06b9df24 */
        FUN_033b9870();
      }
      uVar5 = FUN_06b9e6e0(0xffffffff,(int)lVar4);
      if ((uVar5 & 1) != 0) goto LAB_06b9dcdc;
    }
    else {
LAB_06b9dcdc:
      lVar6 = *(long *)(unaff_x22 + 0x648);
      lVar4 = unaff_x20[2];
      if (*(int *)(lVar6 + 0xe0) == 0) {
        FUN_033b9870();
        lVar6 = *(long *)(unaff_x22 + 0x648);
      }
                    /* try { // try from 06b9dcf4 to 06c9dcff has its CatchHandler @ 06b9df10 */
      *(int *)(*(long *)(lVar6 + 0xb8) + 0x10) = (int)lVar4;
    }
    do {
      unaff_w19 = unaff_w19 + 1;
      lVar4 = *(long *)(unaff_x22 + 0x648);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar4 = *(long *)(unaff_x22 + 0x648);
      }
      lVar6 = *(long *)(lVar4 + 0xb8);
      if (*(long *)(lVar6 + 8) == 0) goto LAB_06b9e0b8;
      iVar3 = *(int *)(*(long *)(lVar6 + 8) + 0x18);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        FUN_033b9870();
        lVar4 = *(long *)(unaff_x22 + 0x648);
        lVar6 = *(long *)(lVar4 + 0xb8);
      }
      if (iVar3 <= unaff_w19) {
        iVar3 = *(int *)(lVar6 + 0x10);
        if (iVar3 == 1) {
LAB_06b9dd30:
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          if ((~*(uint *)(lVar6 + 0x14) & 3) == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              FUN_033b9870();
              lVar4 = *(long *)(unaff_x22 + 0x648);
              lVar6 = *(long *)(lVar4 + 0xb8);
            }
                    /* try { // try from 06b9dd68 to 06c9dd8f has its CatchHandler @ 06b9df5c */
            *(undefined4 *)(lVar6 + 0x10) = 3;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 06b9dd18 to 06c9dd1f has its CatchHandler @ 06b9df2c */
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
            iVar3 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x10);
          }
          if (iVar3 == 2) goto LAB_06b9dd30;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870();
          lVar4 = *(long *)(unaff_x22 + 0x648);
        }
        iVar3 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x10);
        if (iVar3 == 0x20) {
LAB_06b9ddb0:
          if (*(int *)(lVar4 + 0xe0) == 0) {
                    /* try { // try from 06b9ddb8 to 06c9dde7 has its CatchHandler @ 06b9df6c */
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
          }
          lVar6 = *(long *)(lVar4 + 0xb8);
          if ((~*(uint *)(lVar6 + 0x14) & 0x60) == 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              FUN_033b9870();
              lVar4 = *(long *)(unaff_x22 + 0x648);
              lVar6 = *(long *)(lVar4 + 0xb8);
            }
                    /* try { // try from 06b9dde8 to 06c9ddf3 has its CatchHandler @ 06b9df18 */
            *(undefined4 *)(lVar6 + 0x10) = 0x60;
          }
        }
        else {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
                    /* try { // try from 06b9dd9c to 06c9dda7 has its CatchHandler @ 06b9df28 */
            lVar4 = *(long *)(unaff_x22 + 0x648);
            iVar3 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x10);
          }
          if (iVar3 == 0x40) goto LAB_06b9ddb0;
        }
                    /* try { // try from 06b9ddf4 to 06c9ded3 has its CatchHandler @ 06b9d87c */
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870();
          lVar4 = *(long *)(unaff_x22 + 0x648);
        }
        lVar6 = *(long *)(lVar4 + 0xb8);
        if ((*(uint *)(lVar6 + 0x10) & *(uint *)(lVar6 + 0x14)) == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
            lVar6 = *(long *)(lVar4 + 0xb8);
          }
          *(undefined4 *)(lVar6 + 0x10) = 0;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870();
          lVar4 = *(long *)(unaff_x22 + 0x648);
        }
        lVar6 = *(long *)(lVar4 + 0xb8);
        if (*(int *)(lVar6 + 0x10) == 0) {
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
            lVar6 = *(long *)(lVar4 + 0xb8);
          }
          uVar8 = *(uint *)(lVar6 + 0x14) & 0x60;
          if (uVar8 != 0) {
            if (*(int *)(lVar4 + 0xe0) == 0) {
              FUN_033b9870();
              lVar6 = *(long *)(*(long *)(unaff_x22 + 0x648) + 0xb8);
              uVar8 = *(uint *)(lVar6 + 0x14) & 0x60;
            }
            *(uint *)(lVar6 + 0x10) = uVar8;
          }
        }
        lVar4 = *(long *)(unaff_x23 + 0x660);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870(lVar4);
          lVar4 = *(long *)(unaff_x23 + 0x660);
        }
        if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x118) == 1) {
          if (*(int *)(*(long *)(unaff_x22 + 0x648) + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar5 = FUN_06b9cf54();
          lVar4 = *(long *)(unaff_x23 + 0x660);
          uVar5 = uVar5 & 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870(lVar4);
        }
        if (DAT_086e1bc9 == '\0') {
          FUN_0335b6c8(&DAT_083cf660,1);
          DataMemoryBarrier(2,3);
          DAT_086e1bc9 = '\x01';
        }
        lVar4 = *(long *)(unaff_x23 + 0x660);
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870();
          lVar4 = *(long *)(unaff_x23 + 0x660);
        }
        uVar9 = **(undefined8 **)(lVar4 + 0xb8);
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870(DAT_083cf7d8);
        }
        uVar7 = FUN_07a0d2c4(uVar9,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*(long *)(unaff_x23 + 0x660) + 0xe0) == 0) {
            FUN_033b9870();
          }
          if (DAT_086e1bc9 == '\0') {
            FUN_0335b6c8(&DAT_083cf660,1);
            DataMemoryBarrier(2,3);
            DAT_086e1bc9 = '\x01';
          }
          lVar4 = *(long *)(unaff_x23 + 0x660);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x23 + 0x660);
          }
          if (**(long **)(lVar4 + 0xb8) == 0) {
LAB_06b9e0b8:
                    /* WARNING: Subroutine does not return */
            FUN_033d1d3c();
          }
          uVar7 = FUN_06b9e74c();
          if ((uVar7 & 1) != 0) {
            lVar4 = *(long *)(unaff_x23 + 0x660);
            if (*(int *)(lVar4 + 0xe0) == 0) {
              FUN_033b9870();
              lVar4 = *(long *)(unaff_x23 + 0x660);
            }
            if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x118) == 1) goto LAB_06b9dfd8;
            goto LAB_06b9e064;
          }
        }
        if ((uVar5 & 1) != 0) {
LAB_06b9dfd8:
          lVar4 = *(long *)(unaff_x22 + 0x648);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
          }
          uVar8 = *(uint *)(*(long *)(lVar4 + 0xb8) + 0x10);
          if (*(int *)(DAT_083cf6c8 + 0xe0) == 0) {
            FUN_033b9870(DAT_083cf6c8);
          }
          uVar2 = FUN_06bc0848(0);
          *(undefined4 *)(*(long *)(*(long *)(unaff_x22 + 0x648) + 0xb8) + 0x14) = uVar2;
          iVar3 = Recognissimo_Utils_Network_DownloadManager_<Download>d__13__System_IDisposable_Dispose
                            (0);
          lVar4 = *(long *)(unaff_x22 + 0x648);
          lVar6 = *(long *)(lVar4 + 0xb8);
          *(int *)(lVar6 + 0x10) = iVar3;
          if ((uVar8 & 0x60) == 0) {
            return;
          }
          if (iVar3 != 0) {
            return;
          }
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar6 = *(long *)(*(long *)(unaff_x22 + 0x648) + 0xb8);
          }
          *(uint *)(lVar6 + 0x10) = uVar8;
          return;
        }
        lVar4 = *(long *)(unaff_x23 + 0x660);
LAB_06b9e064:
        if (*(int *)(lVar4 + 0xe0) == 0) {
          FUN_033b9870();
          lVar4 = *(long *)(unaff_x23 + 0x660);
        }
        if (*(int *)(*(long *)(lVar4 + 0xb8) + 0x118) == 2) {
          lVar4 = *(long *)(unaff_x22 + 0x648);
          if (*(int *)(lVar4 + 0xe0) == 0) {
            FUN_033b9870();
            lVar4 = *(long *)(unaff_x22 + 0x648);
          }
          *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x10) =
               *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x14);
        }
        return;
      }
      if ((*(long *)(lVar6 + 8) == 0) ||
         (unaff_x20 = (long *)FUN_04ab0b48(*(long *)(lVar6 + 8),unaff_w19,
                                           *(undefined8 *)(unaff_x24 + 0x20)),
         unaff_x20 == (long *)0x0)) goto LAB_06b9e0b8;
      uVar8 = *(uint *)(*(long *)(*(long *)(unaff_x22 + 0x648) + 0xb8) + 0x14);
      uVar1 = (**(code **)(*unaff_x20 + 0x178))(unaff_x20,*(undefined8 *)(*unaff_x20 + 0x180));
      param_1 = *(long *)(unaff_x22 + 0x648);
      uVar1 = uVar1 | uVar8;
      *(uint *)(*(long *)(param_1 + 0xb8) + 0x14) = uVar1;
      unaff_w21 = *(uint *)(unaff_x20 + 2);
    } while ((unaff_w21 & uVar1) == 0);
  } while( true );
}


