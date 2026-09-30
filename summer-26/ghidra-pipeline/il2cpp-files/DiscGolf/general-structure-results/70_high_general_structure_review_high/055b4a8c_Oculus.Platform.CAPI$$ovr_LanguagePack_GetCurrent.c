/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_LanguagePack_GetCurrent
ENTRY_POINT: 055b4a8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined4 Oculus_Platform_CAPI__ovr_LanguagePack_GetCurrent(void)

{
  undefined *puVar1;
  bool in_ZR;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x21;
  int unaff_w22;
  long *plVar12;
  undefined1 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  byte *unaff_x28;
  undefined1 *unaff_x29;
  int iStack0000000000000004;
  undefined8 *in_stack_00000008;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  if (!in_ZR) {
    plVar12 = *(long **)(unaff_x19 + 0x68);
    if (plVar12 == (long *)0x0) goto LAB_055b4e64;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    iStack0000000000000004 = unaff_w22;
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_055b4af4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_02dd004c(plVar12,*(long *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                          ,1);
LAB_055b4af4:
    lVar9 = (*(code *)*puVar5)(plVar12);
    *unaff_x26 = lVar9;
    LeanTween__value();
    *unaff_x29 = 1;
    unaff_w22 = iStack0000000000000004;
    if (*unaff_x26 != 0) {
      thunk_FUN_02da6564(*unaff_x26,0);
      lVar9 = FUN_055ae66c();
      *unaff_x25 = lVar9;
      LeanTween__value();
      lVar9 = *unaff_x25;
      if (lVar9 == 0) goto LAB_055b4e64;
      if (*(char *)(lVar9 + 0x28) == '\0') {
        bVar2 = FUN_05598144(*(undefined8 *)(lVar9 + 0x60),0);
        bVar2 = (bVar2 ^ 0xff) & 1;
      }
      else {
        bVar2 = 0;
      }
      *unaff_x28 = bVar2;
    }
  }
  puVar1 = System_Net_ServicePoint_var;
  if ((*(char *)(unaff_x19 + 0x82) == '\0') && (*unaff_x28 == 0)) {
    plVar12 = *(long **)(unaff_x21 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)System_Net_ServicePoint_var) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_055b4d84;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)System_Net_ServicePoint_var,0);
LAB_055b4d84:
      iVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (2 < iVar3) {
        lVar9 = *(long *)(unaff_x21 + 0x28);
        uVar6 = (**(code **)(*in_stack_00000018 + 0x1c8))
                          (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1d0));
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
        }
        uVar7 = FUN_0547e2f8(0);
        uVar7 = FUN_05588558(*(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
                             ,uVar7,*(undefined8 *)(unaff_x19 + 0x30),
                             *(undefined8 *)(unaff_x19 + 0x50),0);
        if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
        }
        uVar8 = thunk_FUN_02dd3048(in_stack_00000018,
                                   *(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var);
        uVar6 = FUN_05570ab4(uVar8,uVar6,uVar7,0);
        if (lVar9 != 0) {
          FUN_02cfc328(1,*(undefined8 *)puVar1,lVar9,3,uVar6,0);
          return 1;
        }
        goto LAB_055b4e64;
      }
    }
    return 1;
  }
  if ((unaff_w22 == 0xb) && (iVar3 = FUN_055ac134(), iVar3 == 1)) {
LAB_055b4c40:
    *unaff_x24 = 1;
    return 1;
  }
  puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo;
  in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
  if (*(long *)(unaff_x21 + 0x20) != 0) {
    uVar10 = FUN_043301f4(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                         );
    if ((uVar10 & 1) != 0) {
      in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x90);
      if (*(long *)(unaff_x21 + 0x20) == 0) goto LAB_055b4e64;
      uVar4 = FUN_043301f4(&stack0x00000020,*(undefined4 *)(*(long *)(unaff_x21 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar4 >> 1 & 1) == 0) && (uVar10 = FUN_05595c44(unaff_w22,0), (uVar10 & 1) != 0)) {
        uVar6 = (**(code **)(*in_stack_00000018 + 0x198))
                          (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x1a0));
        uVar7 = FUN_055ab994();
        uVar10 = FUN_05596184(uVar6,uVar7,0);
        if ((uVar10 & 1) != 0) goto LAB_055b4c40;
      }
    }
    if (*unaff_x26 == 0) {
      *unaff_x25 = *unaff_x27;
    }
    else {
      thunk_FUN_02da6564(*unaff_x26,0);
      lVar9 = FUN_055ae66c();
      *unaff_x25 = lVar9;
      LeanTween__value();
      if (*unaff_x25 == *unaff_x27) {
        return 0;
      }
      uVar6 = FUN_055aea4c();
      *in_stack_00000008 = uVar6;
    }
    LeanTween__value();
    return 0;
  }
LAB_055b4e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


