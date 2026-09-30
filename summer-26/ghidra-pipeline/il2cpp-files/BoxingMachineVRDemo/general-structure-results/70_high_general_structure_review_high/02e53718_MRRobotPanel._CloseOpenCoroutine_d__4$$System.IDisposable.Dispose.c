/*
FUNCTION_NAME: MRRobotPanel.<CloseOpenCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 02e53718
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


undefined8
MRRobotPanel_<CloseOpenCoroutine>d__4__System_IDisposable_Dispose
          (undefined1 param_1 [16],float param_2,float param_3)

{
  byte bVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  puVar3 = PTR_DAT_0675e1b8;
  _uStack0000000000000008 = 0;
  if ((unaff_x20 == 0) || (lVar4 = *(long *)(unaff_x20 + 0x88), lVar4 == 0))
  goto thunk_FUN_02d60ae8;
  uVar6 = *(ulong *)(lVar4 + 0x18);
  if (uVar6 == 0) {
LAB_02e5392c:
    uVar10 = 0;
  }
  else {
    _uStack0000000000000008 = 0;
    if (0 < (int)uVar6) {
      lVar11 = 0;
      do {
        if ((uint)uVar6 <= (uint)lVar11) goto LAB_02e539d0;
        uVar10 = *(undefined8 *)(lVar4 + lVar11 * 8 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)puVar3);
        }
        uVar6 = UnityEngine_Font__add_textureRebuilt(uVar10,0,0);
        if ((uVar6 & 1) != 0) {
          uVar10 = FUN_050048bc(&stack0x0000000c,0);
          puVar7 = (undefined8 *)PTR_DAT_0675ead0;
          puVar8 = (undefined8 *)PTR_DAT_0675eac8;
          goto LAB_02e53950;
        }
        _uStack0000000000000008 = CONCAT44((uint)lVar11 + 1,uStack0000000000000008);
        lVar4 = *(long *)(unaff_x20 + 0x88);
        if (lVar4 == 0) goto thunk_FUN_02d60ae8;
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)*(uint *)(lVar4 + 0x18));
    }
    plVar5 = (long *)ScreenParent__StartChange();
    if (plVar5 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0675ea70 + 0x130);
      if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0675ea70))
      {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar5);
      }
    }
    if (*(int *)(*(long *)PTR_DAT_0675e1b8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(plVar5,0,0);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_02e54428(*(undefined8 *)(unaff_x20 + 0x88));
      fVar2 = DAT_01208240;
      if ((uVar6 & 1) != 0) {
        _uStack0000000000000008 = _uStack0000000000000008 & 0xffffffff00000000;
        lVar4 = *(long *)(unaff_x20 + 0x88);
        if (lVar4 != 0) {
          lVar11 = 0;
LAB_02e53858:
          uVar9 = (uint)lVar11;
          if (*(int *)(lVar4 + 0x18) <= (int)uVar9) goto LAB_02e5392c;
          if (uVar9 == 0) {
            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_02e539d0;
            if (*(long *)(lVar4 + 0x20) != 0) {
              fVar12 = (float)FUN_06078c44(*(long *)(lVar4 + 0x20),0);
              lVar4 = *(long *)(unaff_x20 + 0x18);
joined_r0x02e538d8:
              if (lVar4 != 0) {
                fVar14 = param_2;
                fVar15 = param_3;
                fVar13 = (float)FUN_06078c44(lVar4,0);
                fVar14 = param_2 - fVar14;
                param_3 = param_3 - fVar15;
                param_2 = param_3 * param_3;
                if (fVar2 <= param_2 + (fVar12 - fVar13) * (fVar12 - fVar13) + fVar14 * fVar14)
                goto MultiLanguageOptionController__SetupOption;
                uVar10 = FUN_050048bc(&stack0x00000008,0);
                puVar7 = (undefined8 *)PTR_DAT_0675ead8;
                puVar8 = (undefined8 *)PTR_DAT_0675eae0;
LAB_02e53950:
                uVar10 = FUN_04e8db00(*puVar7,uVar10,*puVar8,0);
                goto LAB_02e53968;
              }
            }
          }
          else {
            lVar4 = *(long *)(unaff_x20 + 0x88);
            if (lVar4 != 0) {
              if ((int)*(uint *)(lVar4 + 0x18) < 2) goto MultiLanguageOptionController__SetupOption;
              if (*(uint *)(lVar4 + 0x18) <= uVar9) {
LAB_02e539d0:
                    /* WARNING: Subroutine does not return */
                FUN_02d60af0();
              }
              lVar4 = *(long *)(lVar4 + lVar11 * 8 + 0x20);
              if (lVar4 != 0) {
                fVar12 = (float)FUN_06078c44(lVar4,0);
                lVar4 = *(long *)(unaff_x20 + 0x88);
                if (lVar4 != 0) {
                  if (uVar9 - 1 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = *(long *)(lVar4 + lVar11 * 8 + 0x18);
                    goto joined_r0x02e538d8;
                  }
                  goto LAB_02e539d0;
                }
              }
            }
          }
        }
        goto thunk_FUN_02d60ae8;
      }
      *unaff_x19 = *(undefined8 *)PTR_DAT_0675eac0;
    }
    else {
      if (plVar5 == (long *)0x0) {
thunk_FUN_02d60ae8:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar10 = thunk_FUN_0606f5c0(plVar5,0);
      uVar10 = FUN_04e83184(uVar10,*(undefined8 *)PTR_DAT_0675eab8,0);
LAB_02e53968:
      *unaff_x19 = uVar10;
    }
    thunk_FUN_02dd37b4();
    uVar10 = 1;
  }
  return uVar10;
MultiLanguageOptionController__SetupOption:
  lVar11 = lVar11 + 1;
  _uStack0000000000000008 = CONCAT44(uStack000000000000000c,(int)lVar11);
  lVar4 = *(long *)(unaff_x20 + 0x88);
  if (lVar4 == 0) goto thunk_FUN_02d60ae8;
  goto LAB_02e53858;
}


