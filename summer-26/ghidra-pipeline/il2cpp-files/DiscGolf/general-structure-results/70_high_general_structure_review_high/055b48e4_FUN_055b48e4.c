/*
FUNCTION_NAME: FUN_055b48e4
ENTRY_POINT: 055b48e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_14;ray_or_cast_sink_hits_5;telemetry_or_network_hits_3
*/


undefined4
FUN_055b48e4(long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,long *param_6,
            undefined8 param_7,byte *param_8,long *param_9,long *param_10,undefined1 *param_11,
            undefined1 *param_12)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_06dbb63f & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                );
    FUN_02d965b8(UnityEngine_SendMouseEvents_HitInfo_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                );
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
                );
    DAT_06dbb63f = 1;
  }
  local_70 = 0;
  local_68 = 0;
  *param_9 = 0;
  LeanTween__value(param_9,0);
  *param_8 = 0;
  *param_10 = 0;
  LeanTween__value(param_10,0);
  *param_11 = 0;
  *param_12 = 0;
  if (param_2 == 0) goto LAB_055b4e64;
  if (*(char *)(param_2 + 0x80) != '\0') {
    return 1;
  }
  if (param_6 == (long *)0x0) goto LAB_055b4e64;
  iVar3 = (**(code **)(*param_6 + 0x188))(param_6,*(undefined8 *)(*param_6 + 400));
  plVar14 = (long *)(param_2 + 0x48);
  if (*plVar14 == 0) {
    uVar6 = FUN_055ae608(param_1,*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x48) = uVar6;
    LeanTween__value(plVar14,uVar6);
  }
  local_68 = *(undefined8 *)(param_2 + 0xa0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_055b4e64;
  iVar4 = FUN_043301f4(&local_68,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),
                       *(undefined8 *)
                        System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                      );
  if ((iVar4 != 2) &&
     ((((iVar3 - 1U < 2 || (*param_3 != 0)) && (*(char *)(param_2 + 0x81) != '\0')) &&
      ((*plVar14 == 0 || (*(int *)(*plVar14 + 0x24) != 8)))))) {
    plVar13 = *(long **)(param_2 + 0x68);
    if (plVar13 == (long *)0x0) goto LAB_055b4e64;
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) ==
            *(long *)
             System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_055b4af4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)
             FUN_02dd004c(plVar13,*(long *)
                                   System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                          ,1);
LAB_055b4af4:
    lVar10 = (*(code *)*puVar7)(plVar13,param_7,puVar7[1]);
    *param_9 = lVar10;
    LeanTween__value(param_9,lVar10);
    *param_11 = 1;
    if (*param_9 != 0) {
      uVar6 = thunk_FUN_02da6564(*param_9,0);
      lVar10 = FUN_055ae66c(param_1,uVar6);
      *param_10 = lVar10;
      LeanTween__value(param_10,lVar10);
      lVar10 = *param_10;
      if (lVar10 == 0) goto LAB_055b4e64;
      if (*(char *)(lVar10 + 0x28) == '\0') {
        bVar2 = FUN_05598144(*(undefined8 *)(lVar10 + 0x60),0);
        bVar2 = (bVar2 ^ 0xff) & 1;
      }
      else {
        bVar2 = 0;
      }
      *param_8 = bVar2;
    }
  }
  puVar1 = System_Net_ServicePoint_var;
  if ((*(char *)(param_2 + 0x82) == '\0') && (*param_8 == 0)) {
    plVar14 = *(long **)(param_1 + 0x28);
    if (plVar14 != (long *)0x0) {
      lVar10 = *plVar14;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)System_Net_ServicePoint_var) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_055b4d84;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_02dd004c(plVar14,*(long *)System_Net_ServicePoint_var,0);
LAB_055b4d84:
      iVar3 = (*(code *)*puVar7)(plVar14,puVar7[1]);
      if (2 < iVar3) {
        lVar10 = *(long *)(param_1 + 0x28);
        uVar6 = (**(code **)(*param_6 + 0x1c8))(param_6,*(undefined8 *)(*param_6 + 0x1d0));
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
        }
        uVar8 = FUN_0547e2f8(0);
        uVar8 = FUN_05588558(*(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
                             ,uVar8,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x50),
                             0);
        if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
        }
        uVar9 = thunk_FUN_02dd3048(param_6,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var)
        ;
        uVar6 = FUN_05570ab4(uVar9,uVar6,uVar8,0);
        if (lVar10 != 0) {
          FUN_02cfc328(1,*(undefined8 *)puVar1,lVar10,3,uVar6,0);
          return 1;
        }
        goto LAB_055b4e64;
      }
    }
    return 1;
  }
  if (iVar3 == 0xb) {
    if (param_4 == (long *)0x0) {
LAB_055b4bbc:
      plVar13 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(*(long *)UnityEngine_SendMouseEvents_HitInfo_var + 0x130);
      if (*(byte *)(*param_4 + 0x130) < bVar2) goto LAB_055b4bbc;
      plVar13 = param_4;
      if (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)UnityEngine_SendMouseEvents_HitInfo_var) {
        plVar13 = (long *)0x0;
      }
    }
    iVar4 = FUN_055ac134(param_1,plVar13,param_2);
    if (iVar4 == 1) goto LAB_055b4c40;
  }
  puVar1 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo;
  local_70 = *(undefined8 *)(param_2 + 0x90);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar11 = FUN_043301f4(&local_70,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                          *(undefined8 *)
                           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<FileItem>>_TypeInfo
                         );
    if ((uVar11 & 1) != 0) {
      local_70 = *(undefined8 *)(param_2 + 0x90);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_055b4e64;
      uVar5 = FUN_043301f4(&local_70,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),
                           *(undefined8 *)puVar1);
      if (((uVar5 >> 1 & 1) == 0) && (uVar11 = FUN_05595c44(iVar3,0), (uVar11 & 1) != 0)) {
        uVar6 = (**(code **)(*param_6 + 0x198))(param_6,*(undefined8 *)(*param_6 + 0x1a0));
        uVar8 = FUN_055ab994(param_2);
        uVar11 = FUN_05596184(uVar6,uVar8,0);
        if ((uVar11 & 1) != 0) {
LAB_055b4c40:
          *param_12 = 1;
          return 1;
        }
      }
    }
    if (*param_9 == 0) {
      *param_10 = *plVar14;
      param_3 = param_10;
    }
    else {
      uVar6 = thunk_FUN_02da6564(*param_9,0);
      lVar10 = FUN_055ae66c(param_1,uVar6);
      *param_10 = lVar10;
      LeanTween__value(param_10,lVar10);
      if (*param_10 == *plVar14) {
        return 0;
      }
      lVar10 = FUN_055aea4c(param_1,*param_10,*(undefined8 *)(param_2 + 0x78),param_4,param_5);
      *param_3 = lVar10;
    }
    LeanTween__value(param_3);
    return 0;
  }
LAB_055b4e64:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


