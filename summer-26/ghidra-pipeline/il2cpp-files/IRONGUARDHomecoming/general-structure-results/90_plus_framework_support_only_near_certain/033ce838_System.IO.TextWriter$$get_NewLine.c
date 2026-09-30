/*
FUNCTION_NAME: System.IO.TextWriter$$get_NewLine
ENTRY_POINT: 033ce838
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033ce8f8) */

long System_IO_TextWriter__get_NewLine(undefined8 param_1,int param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined1 uVar12;
  int iVar13;
  long *unaff_x20;
  undefined4 unaff_w21;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (param_2 != 1) {
    plVar8 = (long *)thunk_FUN_01f116d0();
    if (plVar8 != (long *)0x0) {
      lVar15 = *plVar8;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar15 + (long)*piVar11 * 0x10 + 0x138);
            goto code_r0x033ce8e0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
code_r0x033ce8e0:
      (*(code *)*puVar6)(plVar8,puVar6[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14();
  }
  plVar8 = (long *)__cxa_begin_catch();
  lVar15 = *plVar8;
  __cxa_end_catch();
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar8 = (long *)thunk_FUN_01f116d0();
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033ce624;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar8,*(long *)puVar4,0);
LAB_033ce624:
    (*(code *)*puVar6)(plVar8,puVar6[1]);
  }
  puVar4 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  if (lVar15 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar15);
  }
  lVar15 = FUN_01f08890(*(undefined8 *)
                         Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,unaff_w21
                       );
  plVar8 = *(long **)(unaff_x19 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_033ce6e8;
  iVar14 = 0;
  iVar13 = 0;
  while (iVar5 = (**(code **)(*plVar8 + 0x298))(plVar8,*(undefined8 *)(*plVar8 + 0x2a0)),
        iVar13 < iVar5) {
    if ((unaff_x20 == (long *)0x0) || (lVar9 = (**(code **)(*unaff_x20 + 0x2e8))(), lVar9 == 0))
    goto LAB_033ce6e8;
    uVar16 = *(undefined8 *)puVar4;
    lVar7 = thunk_FUN_01f116d0(lVar9,uVar16);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar9,uVar16);
    }
    FUN_03596b60(lVar7,0,lVar15,iVar14,*(undefined4 *)(lVar7 + 0x18),0);
    plVar8 = *(long **)(unaff_x19 + 0x20);
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + *(int *)(lVar7 + 0x18);
    if (plVar8 == (long *)0x0) goto LAB_033ce6e8;
  }
  if (lVar15 == 0) {
    lVar9 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,2);
    uVar12 = 0;
  }
  else {
    uVar10 = *(ulong *)(lVar15 + 0x18);
    iVar13 = (int)uVar10;
    if (iVar13 < 0x80) {
      lVar9 = FUN_01f08890(*(undefined8 *)
                            Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                           iVar13 + 2);
      FUN_03596b60(lVar15,0,lVar9,2,uVar10 & 0xffffffff,0);
    }
    else {
      uVar12 = (undefined1)uVar10;
      if (iVar13 < 0x100) {
        lVar9 = FUN_01f08890(*(undefined8 *)
                              Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                             iVar13 + 3);
        FUN_03596b60(lVar15,0,lVar9,3,uVar10 & 0xffffffff,0);
        if (lVar9 == 0) goto LAB_033ce6e8;
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_033ce814;
        *(undefined1 *)(lVar9 + 0x22) = uVar12;
        iVar13 = 0x81;
      }
      else {
        uVar2 = (undefined1)(uVar10 >> 8);
        if (iVar13 < 0x10000) {
          lVar9 = FUN_01f08890(*(undefined8 *)
                                Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                               iVar13 + 4);
          FUN_03596b60(lVar15,0,lVar9,4,uVar10 & 0xffffffff,0);
          if (lVar9 == 0) goto LAB_033ce6e8;
          if ((*(uint *)(lVar9 + 0x18) < 3) ||
             (*(undefined1 *)(lVar9 + 0x22) = uVar2, *(uint *)(lVar9 + 0x18) == 3))
          goto LAB_033ce814;
          *(undefined1 *)(lVar9 + 0x23) = uVar12;
          iVar13 = 0x82;
        }
        else {
          uVar3 = (undefined1)(uVar10 >> 0x10);
          if (iVar13 < 0x1000000) {
            lVar9 = FUN_01f08890(*(undefined8 *)
                                  Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                 iVar13 + 5);
            FUN_03596b60(lVar15,0,lVar9,5,uVar10 & 0xffffffff,0);
            if (lVar9 == 0) goto LAB_033ce6e8;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (((uVar1 < 3) || (*(undefined1 *)(lVar9 + 0x22) = uVar3, uVar1 == 3)) ||
               (*(undefined1 *)(lVar9 + 0x23) = uVar2, uVar1 < 5)) goto LAB_033ce814;
            *(undefined1 *)(lVar9 + 0x24) = uVar12;
            iVar13 = 0x83;
          }
          else {
            lVar9 = FUN_01f08890(*(undefined8 *)
                                  Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                 iVar13 + 6);
            FUN_03596b60(lVar15,0,lVar9,6,uVar10 & 0xffffffff,0);
            if (lVar9 == 0) goto LAB_033ce6e8;
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (((uVar1 < 3) || (*(char *)(lVar9 + 0x22) = (char)(uVar10 >> 0x18), uVar1 == 3)) ||
               ((*(undefined1 *)(lVar9 + 0x23) = uVar3, uVar1 < 5 ||
                (*(undefined1 *)(lVar9 + 0x24) = uVar2, uVar1 == 5)))) goto LAB_033ce814;
            *(undefined1 *)(lVar9 + 0x25) = uVar12;
            iVar13 = 0x84;
          }
        }
      }
    }
    uVar12 = (undefined1)iVar13;
    plVar8 = (long *)(unaff_x19 + 0x18);
    if (*plVar8 == 0) {
      *plVar8 = lVar15;
      thunk_FUN_01f51358(plVar8,lVar15);
    }
  }
  if (lVar9 != 0) {
    if ((*(int *)(lVar9 + 0x18) != 0) &&
       (*(undefined1 *)(lVar9 + 0x20) = *(undefined1 *)(unaff_x19 + 0x10),
       *(int *)(lVar9 + 0x18) != 1)) {
      *(undefined1 *)(lVar9 + 0x21) = uVar12;
      return lVar9;
    }
LAB_033ce814:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_033ce6e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


