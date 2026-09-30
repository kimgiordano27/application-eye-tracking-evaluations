/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.EyeGazeState>
ENTRY_POINT: 034e5924
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


bool System_Array__InternalArray__ICollection_Add<OVRPlugin_EyeGazeState>(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x23;
  long *unaff_x26;
  long *unaff_x28;
  long unaff_x29;
  
  uVar7 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd010,0);
  uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(param_1,uVar7,0);
  if ((uVar8 & 1) == 0) {
    uVar7 = *(undefined8 *)*unaff_x28;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar7 = FUN_04f3fb68(uVar7,0);
    uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd950,0);
    uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
    if ((uVar8 & 1) == 0) {
      uVar7 = *(undefined8 *)*unaff_x28;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar7 = FUN_04f3fb68(uVar7,0);
      uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd900,0);
      uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
      if ((uVar8 & 1) == 0) {
        uVar7 = *(undefined8 *)*unaff_x28;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar7 = FUN_04f3fb68(uVar7,0);
        uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd910,0);
        uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
        if ((uVar8 & 1) == 0) {
          uVar7 = *(undefined8 *)*unaff_x28;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          uVar7 = FUN_04f3fb68(uVar7,0);
          uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd908,0);
          uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
          if ((uVar8 & 1) == 0) {
            uVar7 = *(undefined8 *)*unaff_x28;
            if (*(int *)(*unaff_x26 + 0xe0) == 0) {
              thunk_FUN_02cd038c();
            }
            uVar7 = FUN_04f3fb68(uVar7,0);
            uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd018,0);
            uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
            if ((uVar8 & 1) == 0) {
              uVar7 = *(undefined8 *)*unaff_x28;
              if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                thunk_FUN_02cd038c();
              }
              uVar7 = FUN_04f3fb68(uVar7,0);
              uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd020,0);
              uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
              if ((uVar8 & 1) == 0) {
                uVar7 = *(undefined8 *)*unaff_x28;
                if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                  thunk_FUN_02cd038c();
                }
                uVar7 = FUN_04f3fb68(uVar7,0);
                uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dd008,0);
                uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
                if ((uVar8 & 1) == 0) {
                  uVar7 = *(undefined8 *)*unaff_x28;
                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                    thunk_FUN_02cd038c();
                  }
                  uVar7 = FUN_04f3fb68(uVar7,0);
                  uVar11 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065dcab0,0);
                  uVar8 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar7,uVar11,0);
                  if ((uVar8 & 1) == 0) {
                    bVar2 = false;
                    goto LAB_034e636c;
                  }
                  FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
                  uVar5 = FUN_05e905c0();
                  puVar1 = PTR_DAT_065c9808;
                  *(undefined2 *)(unaff_x29 + -0x10) = uVar5;
                  plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                  lVar12 = *(long *)(*unaff_x28 + 8);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02ce0978(lVar12);
                  }
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7c7c();
                  }
                  if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02ce8018(plVar9);
                  }
                  pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
                }
                else {
                  FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
                  uVar7 = FUN_05e904b4();
                  puVar1 = PTR_DAT_065ca3e0;
                  *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
                  plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                  lVar12 = *(long *)(*unaff_x28 + 8);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_02ce0978(lVar12);
                  }
                  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02ce7c7c();
                  }
                  if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02ce8018(plVar9);
                  }
                  pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
                }
              }
              else {
                FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
                uVar6 = FUN_05e903a8();
                puVar1 = PTR_DAT_065ca3f8;
                *(undefined4 *)(unaff_x29 + -0x10) = uVar6;
                plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
                lVar12 = *(long *)(*unaff_x28 + 8);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_02ce0978(lVar12);
                }
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce7c7c();
                }
                if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02ce8018(plVar9);
                }
                pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
              }
            }
            else {
              FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
              uVar7 = FUN_05e902a8();
              puVar1 = PTR_DAT_065da1a8;
              *(undefined8 *)(unaff_x29 + -0x10) = uVar7;
              plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
              lVar12 = *(long *)(*unaff_x28 + 8);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_02ce0978(lVar12);
              }
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce7c7c();
              }
              if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_02ce8018(plVar9);
              }
              pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
            }
          }
          else {
            FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
            uVar5 = FUN_05e900a8();
            puVar1 = PTR_DAT_065db6e0;
            *(undefined2 *)(unaff_x29 + -0x10) = uVar5;
            plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
            lVar12 = *(long *)(*unaff_x28 + 8);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_02ce0978(lVar12);
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce7c7c();
            }
            if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
              FUN_02ce8018(plVar9);
            }
            pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
          }
        }
        else {
          FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
          uVar4 = FUN_05e8ffa8();
          puVar1 = PTR_DAT_065db6e8;
          *(undefined1 *)(unaff_x29 + -0x10) = uVar4;
          plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
          lVar12 = *(long *)(*unaff_x28 + 8);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_02ce0978(lVar12);
          }
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce7c7c();
          }
          if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(plVar9);
          }
          pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_065c8c48 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_05eb364c(*(undefined8 *)PTR_DAT_065de130,0);
        FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
        uVar4 = FUN_05e8ffa8();
        puVar1 = PTR_DAT_065c8c28;
        *(undefined1 *)(unaff_x29 + -0x10) = uVar4;
        plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
        lVar12 = *(long *)(*unaff_x28 + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_02ce0978(lVar12);
        }
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(plVar9);
        }
        pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
      }
    }
    else {
      FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
      bVar3 = FUN_05e906c4();
      puVar1 = PTR_DAT_065c97b0;
      *(byte *)(unaff_x29 + -0x10) = bVar3 & 1;
      plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
      lVar12 = *(long *)(*unaff_x28 + 8);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_02ce0978(lVar12);
      }
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar9);
      }
      pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
    }
  }
  else {
    FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
    uVar6 = FUN_05e901a8();
    puVar1 = PTR_DAT_065c8a08;
    *(undefined4 *)(unaff_x29 + -0x10) = uVar6;
    plVar9 = (long *)thunk_FUN_02cea4e8(*(undefined8 *)puVar1,unaff_x29 + -0x10);
    lVar12 = *(long *)(*unaff_x28 + 8);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02ce0978(lVar12);
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(lVar12 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar9);
    }
    pcVar10 = (char *)thunk_FUN_02cea9e8(plVar9);
  }
  bVar2 = *pcVar10 != '\0';
LAB_034e636c:
  thunk_FUN_05e8e510();
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


