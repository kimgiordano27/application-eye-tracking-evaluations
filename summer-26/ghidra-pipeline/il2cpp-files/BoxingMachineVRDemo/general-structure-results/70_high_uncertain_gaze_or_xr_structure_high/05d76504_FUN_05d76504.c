/*
FUNCTION_NAME: FUN_05d76504
ENTRY_POINT: 05d76504
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


byte FUN_05d76504(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar1 = PTR_DAT_0676ba80;
                    /* try { // try from 05d76514 to 05e7651b has its CatchHandler @ 05d76700 */
                    /* try { // try from 05d76534 to 05e7653b has its CatchHandler @ 05d7670c */
  if ((DAT_06b82c99 & 1) == 0) {
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Result>_get_HasValue__);
                    /* try { // try from 05d76554 to 05e76573 has its CatchHandler @ 05d76714 */
    FUN_02d6084c(Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Result>_get_Value__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__);
                    /* try { // try from 05d76580 to 05e76587 has its CatchHandler @ 05d766f8 */
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_XrApi>_get_Value__);
                    /* try { // try from 05d76594 to 05e76597 has its CatchHandler @ 05d7670c */
    FUN_02d6084c(Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
                    /* try { // try from 05d76598 to 05e765a3 has its CatchHandler @ 05d76724 */
    FUN_02d6084c(Method_System_Nullable<InputBinding>__ctor__);
    FUN_02d6084c(Method_System_Nullable<InputBinding>_GetValueOrDefault__);
    FUN_02d6084c(PTR_DAT_0675e6d8);
    FUN_02d6084c(PTR_DAT_0676ba80);
    DAT_06b82c99 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  if ((DAT_06b82c9a & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e6d8);
    DAT_06b82c9a = 1;
  }
  if (param_2 == 0) {
LAB_05d76800:
    bVar5 = 0;
    goto switchD_05d76654_caseD_6;
  }
  iVar6 = FUN_05d68af4(param_1);
  iVar7 = FUN_05d68af4(param_2);
  if (iVar6 != iVar7) goto LAB_05d76800;
  uVar8 = FUN_05d68af4(param_1);
  bVar5 = 1;
  switch(uVar8) {
  case 0:
    lVar9 = FUN_05d67a18(param_1);
    lVar10 = FUN_05d67a18(param_2);
    puVar1 = Method_System_Nullable<InputBinding>_GetValueOrDefault__;
    if ((lVar9 == 0) || (lVar10 == 0)) goto LAB_05d768fc;
    if (*(int *)(lVar9 + 0x18) != *(int *)(lVar10 + 0x18)) goto LAB_05d76800;
    if (0 < *(int *)(lVar9 + 0x18)) {
      iVar6 = 0;
      do {
        lVar11 = FUN_03aac1c4(lVar9,iVar6,*(undefined8 *)puVar1);
        uVar13 = FUN_03aac1c4(lVar10,iVar6,*(undefined8 *)puVar1);
        if (lVar11 == 0) goto LAB_05d768fc;
        bVar5 = FUN_05d76504(lVar11,uVar13);
      } while (((bVar5 & 1) != 0) && (iVar6 = iVar6 + 1, iVar6 < *(int *)(lVar9 + 0x18)));
      break;
    }
    goto LAB_05d768d0;
  case 1:
    lVar9 = FUN_05d69ae4(param_1);
    lVar10 = FUN_05d69ae4(param_2);
    puVar1 = Method_System_Nullable<OVRPlugin_Result>_get_HasValue__;
    if ((lVar9 == 0) ||
       (iVar6 = FUN_048953c0(lVar9,*(undefined8 *)
                                    Method_System_Nullable<OVRPlugin_Result>_get_HasValue__),
       lVar10 == 0)) {
LAB_05d768fc:
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar7 = FUN_048953c0(lVar10,*(undefined8 *)puVar1);
    if (iVar6 == iVar7) {
      lVar11 = FUN_048953d0(lVar9,*(undefined8 *)
                                   Method_System_Nullable<OVRPlugin_Result>_get_Value__);
      if (lVar11 != 0) {
        FUN_038e3508(&local_68,lVar11,
                     *(undefined8 *)Method_System_Nullable<OVRSceneManager_LogForwarder>__ctor__);
        puVar3 = Method_System_Nullable<OVRPlugin_XrApi>_get_HasValue__;
        puVar2 = Method_System_Nullable<MetadataPropertyHandling>_GetValueOrDefault__;
        puVar1 = Method_System_Nullable<MetadataPropertyHandling>__ctor__;
        do {
          uVar12 = FUN_04b3ac4c(&local_68,*(undefined8 *)puVar3);
          uVar13 = local_58;
          if ((uVar12 & 1) == 0) {
            iVar6 = 0x17;
            goto LAB_05d768dc;
          }
          uVar12 = FUN_048958e4(lVar10,local_58,*(undefined8 *)puVar1);
          if ((uVar12 & 1) == 0) break;
          lVar11 = FUN_04895670(lVar9,uVar13,*(undefined8 *)puVar2);
          uVar13 = FUN_04895670(lVar10,uVar13,*(undefined8 *)puVar2);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8(uVar13,uVar13);
          }
          uVar12 = FUN_05d76504(lVar11);
        } while ((uVar12 & 1) != 0);
        iVar6 = 0x16;
LAB_05d768dc:
        FUN_04b3ac48(&local_68,*(undefined8 *)Method_System_Nullable<OVRPlugin_XrApi>__ctor__);
        bVar5 = iVar6 != 0x16;
        break;
      }
      goto LAB_05d768fc;
    }
    goto LAB_05d76800;
  case 2:
    dVar15 = (double)FUN_05d6ed80(param_1);
    dVar16 = (double)FUN_05d6ed80(param_2);
    if (dVar15 != dVar16) {
      dVar15 = (double)FUN_05d6ed80(param_1);
      dVar16 = (double)FUN_05d6ed80(param_2);
      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      bVar5 = ABS(dVar15 - dVar16) < 4.94065645841247e-324;
      break;
    }
LAB_05d768d0:
    bVar5 = 1;
    break;
  case 3:
    lVar9 = FUN_05d6b8d0(param_1);
    lVar10 = FUN_05d6b8d0(param_2);
    bVar5 = lVar9 == lVar10;
    break;
  case 4:
    bVar5 = FUN_05d6ed0c(param_1);
    bVar4 = FUN_05d6ed0c(param_2);
    bVar5 = bVar5 ^ bVar4 ^ 1;
    break;
  case 5:
    uVar13 = FUN_05d68d60(param_1);
    uVar14 = FUN_05d68d60(param_2);
    bVar5 = thunk_FUN_04e8bd3c(uVar13,uVar14,0);
    break;
  case 6:
    break;
  default:
    thunk_FUN_02dc61f4(PTR_DAT_067608d0);
    uVar13 = thunk_FUN_02d9d534();
    uVar14 = thunk_FUN_02dc61f4(
                               Method_System_Nullable<OVRSceneManager_LogForwarder>_GetValueOrDefault__
                               );
    FUN_0503de34(uVar13,uVar14,0);
    uVar14 = thunk_FUN_02dc61f4(Method_System_Nullable<OVRSceneManager_LogForwarder>_get_HasValue__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar13,uVar14);
  }
switchD_05d76654_caseD_6:
  return bVar5 & 1;
}


