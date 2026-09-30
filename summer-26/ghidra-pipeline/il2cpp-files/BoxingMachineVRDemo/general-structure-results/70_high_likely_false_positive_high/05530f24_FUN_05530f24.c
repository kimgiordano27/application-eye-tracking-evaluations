/*
FUNCTION_NAME: FUN_05530f24
ENTRY_POINT: 05530f24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_1;strong_file_logging_hits_4
*/


void FUN_05530f24(long param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long *local_28;
  
  if ((DAT_06b7ef86 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06781a40);
    FUN_02d6084c(PTR_DAT_0675e2d0);
    DAT_06b7ef86 = 1;
  }
  puVar1 = PTR_DAT_0675e2d0;
  local_28 = (long *)0x0;
  if (param_2 == (long *)0x0) {
    thunk_FUN_02dc61f4(PTR_DAT_06764070);
    uVar6 = thunk_FUN_02d9d534();
    uVar5 = thunk_FUN_02dc61f4(PTR_DAT_06781a48);
    FUN_04f77010(uVar6,uVar5,0);
    uVar5 = thunk_FUN_02dc61f4(
                              System_Collections_Generic_Dictionary<ScaleUIButton_CanvasCorner,_Vector2>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar5);
  }
  plVar8 = (long *)(param_1 + 0x18);
  if (*plVar8 == 0) {
    lVar4 = thunk_FUN_02d9d438(param_2,*(undefined8 *)PTR_DAT_0675e2d0);
    if (lVar4 != 0) {
      plVar2 = (long *)FUN_02d60934(*(undefined8 *)puVar1,1);
      if (plVar2 == (long *)0x0) goto LAB_0553117c;
      lVar4 = thunk_FUN_02d9d438(param_2,*(undefined8 *)(*plVar2 + 0x40));
      if (lVar4 == 0) goto System_Xml_XmlUtf8RawTextWriter__CharEntity;
      if ((int)plVar2[3] == 0) goto LAB_05531124;
      plVar2[4] = (long)param_2;
      thunk_FUN_02dd37b4(plVar2 + 4,param_2);
      param_2 = plVar2;
    }
    *plVar8 = (long)param_2;
  }
  else {
    local_28 = (long *)thunk_FUN_02d9d438(*plVar8,*(undefined8 *)PTR_DAT_0675e2d0);
    if (local_28 == (long *)0x0) {
      plVar2 = (long *)FUN_02d60934(*(undefined8 *)puVar1,2);
      if (plVar2 == (long *)0x0) {
LAB_0553117c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar4 = *plVar8;
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_02d9d438(lVar4,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
System_Xml_XmlUtf8RawTextWriter__CharEntity:
        uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar6,0);
      }
      if ((int)plVar2[3] != 0) {
        plVar2[4] = lVar4;
        thunk_FUN_02dd37b4(plVar2 + 4,lVar4);
        lVar4 = thunk_FUN_02d9d438(param_2,*(undefined8 *)(*plVar2 + 0x40));
        if (lVar4 == 0) goto System_Xml_XmlUtf8RawTextWriter__CharEntity;
        if (1 < *(uint *)(plVar2 + 3)) {
          plVar2[5] = (long)param_2;
          thunk_FUN_02dd37b4(plVar2 + 5,param_2);
          *plVar8 = (long)plVar2;
          param_2 = plVar2;
          goto LAB_05531110;
        }
      }
LAB_05531124:
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
    uVar7 = (uint)local_28[3];
    if ((int)uVar7 < 1) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        if (uVar7 <= uVar9) goto LAB_05531124;
      } while ((local_28[(long)(int)uVar9 + 4] != 0) && (uVar9 = uVar9 + 1, (int)uVar9 < (int)uVar7)
              );
    }
    if (uVar9 == uVar7) {
      FUN_03277db0(&local_28,uVar9 << 1,*(undefined8 *)PTR_DAT_06781a40);
      *plVar8 = (long)local_28;
      thunk_FUN_02dd37b4(plVar8);
      if (local_28 == (long *)0x0) goto LAB_0553117c;
    }
    plVar8 = local_28;
    lVar4 = thunk_FUN_02d9d438(param_2,*(undefined8 *)(*local_28 + 0x40));
    if (lVar4 == 0) goto System_Xml_XmlUtf8RawTextWriter__CharEntity;
    if (*(uint *)(plVar8 + 3) <= uVar9) goto LAB_05531124;
    plVar8 = plVar8 + (long)(int)uVar9 + 4;
    *plVar8 = (long)param_2;
  }
LAB_05531110:
  thunk_FUN_02dd37b4(plVar8,param_2);
  return;
}


