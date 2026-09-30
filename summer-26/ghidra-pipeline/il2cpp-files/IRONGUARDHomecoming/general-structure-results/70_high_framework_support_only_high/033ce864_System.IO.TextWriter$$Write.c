/*
FUNCTION_NAME: System.IO.TextWriter$$Write
ENTRY_POINT: 033ce864
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;negative_system_io_serialization_or_json_helper_without_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


long System_IO_TextWriter__Write(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  undefined1 uVar13;
  int iVar14;
  long *unaff_x20;
  undefined4 unaff_w21;
  int iVar15;
  long unaff_x23;
  undefined8 uVar16;
  
  puVar4 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar6 = (long *)thunk_FUN_01f116d0();
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_033ce624;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_033ce624:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  puVar4 = Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
  if (unaff_x23 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  lVar10 = FUN_01f08890(*(undefined8 *)
                         Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,unaff_w21
                       );
  plVar6 = *(long **)(unaff_x19 + 0x20);
  if (plVar6 == (long *)0x0) goto LAB_033ce6e8;
  iVar15 = 0;
  iVar14 = 0;
  while (iVar5 = (**(code **)(*plVar6 + 0x298))(plVar6,*(undefined8 *)(*plVar6 + 0x2a0)),
        iVar14 < iVar5) {
    if ((unaff_x20 == (long *)0x0) || (lVar8 = (**(code **)(*unaff_x20 + 0x2e8))(), lVar8 == 0))
    goto LAB_033ce6e8;
    uVar16 = *(undefined8 *)puVar4;
    lVar9 = thunk_FUN_01f116d0(lVar8,uVar16);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(lVar8,uVar16);
    }
    FUN_03596b60(lVar9,0,lVar10,iVar15,*(undefined4 *)(lVar9 + 0x18),0);
    plVar6 = *(long **)(unaff_x19 + 0x20);
    iVar14 = iVar14 + 1;
    iVar15 = iVar15 + *(int *)(lVar9 + 0x18);
    if (plVar6 == (long *)0x0) goto LAB_033ce6e8;
  }
  if (lVar10 == 0) {
    lVar8 = FUN_01f08890(*(undefined8 *)
                          Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,2);
    uVar13 = 0;
  }
  else {
    uVar11 = *(ulong *)(lVar10 + 0x18);
    iVar14 = (int)uVar11;
    if (iVar14 < 0x80) {
      lVar8 = FUN_01f08890(*(undefined8 *)
                            Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                           iVar14 + 2);
      FUN_03596b60(lVar10,0,lVar8,2,uVar11 & 0xffffffff,0);
    }
    else {
      uVar13 = (undefined1)uVar11;
      if (iVar14 < 0x100) {
        lVar8 = FUN_01f08890(*(undefined8 *)
                              Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                             iVar14 + 3);
        FUN_03596b60(lVar10,0,lVar8,3,uVar11 & 0xffffffff,0);
        if (lVar8 == 0) goto LAB_033ce6e8;
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_033ce814;
        *(undefined1 *)(lVar8 + 0x22) = uVar13;
        iVar14 = 0x81;
      }
      else {
        uVar2 = (undefined1)(uVar11 >> 8);
        if (iVar14 < 0x10000) {
          lVar8 = FUN_01f08890(*(undefined8 *)
                                Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                               iVar14 + 4);
          FUN_03596b60(lVar10,0,lVar8,4,uVar11 & 0xffffffff,0);
          if (lVar8 == 0) goto LAB_033ce6e8;
          if ((*(uint *)(lVar8 + 0x18) < 3) ||
             (*(undefined1 *)(lVar8 + 0x22) = uVar2, *(uint *)(lVar8 + 0x18) == 3))
          goto LAB_033ce814;
          *(undefined1 *)(lVar8 + 0x23) = uVar13;
          iVar14 = 0x82;
        }
        else {
          uVar3 = (undefined1)(uVar11 >> 0x10);
          if (iVar14 < 0x1000000) {
            lVar8 = FUN_01f08890(*(undefined8 *)
                                  Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                 iVar14 + 5);
            FUN_03596b60(lVar10,0,lVar8,5,uVar11 & 0xffffffff,0);
            if (lVar8 == 0) goto LAB_033ce6e8;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (((uVar1 < 3) || (*(undefined1 *)(lVar8 + 0x22) = uVar3, uVar1 == 3)) ||
               (*(undefined1 *)(lVar8 + 0x23) = uVar2, uVar1 < 5)) goto LAB_033ce814;
            *(undefined1 *)(lVar8 + 0x24) = uVar13;
            iVar14 = 0x83;
          }
          else {
            lVar8 = FUN_01f08890(*(undefined8 *)
                                  Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                                 iVar14 + 6);
            FUN_03596b60(lVar10,0,lVar8,6,uVar11 & 0xffffffff,0);
            if (lVar8 == 0) goto LAB_033ce6e8;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (((uVar1 < 3) || (*(char *)(lVar8 + 0x22) = (char)(uVar11 >> 0x18), uVar1 == 3)) ||
               ((*(undefined1 *)(lVar8 + 0x23) = uVar3, uVar1 < 5 ||
                (*(undefined1 *)(lVar8 + 0x24) = uVar2, uVar1 == 5)))) goto LAB_033ce814;
            *(undefined1 *)(lVar8 + 0x25) = uVar13;
            iVar14 = 0x84;
          }
        }
      }
    }
    uVar13 = (undefined1)iVar14;
    plVar6 = (long *)(unaff_x19 + 0x18);
    if (*plVar6 == 0) {
      *plVar6 = lVar10;
      thunk_FUN_01f51358(plVar6,lVar10);
    }
  }
  if (lVar8 != 0) {
    if ((*(int *)(lVar8 + 0x18) != 0) &&
       (*(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(unaff_x19 + 0x10),
       *(int *)(lVar8 + 0x18) != 1)) {
      *(undefined1 *)(lVar8 + 0x21) = uVar13;
      return lVar8;
    }
LAB_033ce814:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
LAB_033ce6e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


