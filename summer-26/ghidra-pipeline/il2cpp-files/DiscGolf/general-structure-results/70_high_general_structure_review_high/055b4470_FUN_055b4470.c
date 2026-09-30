/*
FUNCTION_NAME: FUN_055b4470
ENTRY_POINT: 055b4470
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_5;telemetry_or_network_hits_5
*/


bool FUN_055b4470(long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                 long *param_6,undefined8 param_7)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined1 local_74 [4];
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  long local_60;
  char local_54 [4];
  long *local_48;
  
  local_48 = param_3;
  if ((DAT_06dbb63e & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(UnityEngine_UIElements_PanelRaycaster_var);
    FUN_02d965b8(System_Net_ServicePoint_var);
    FUN_02d965b8(
                System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                );
    FUN_02d965b8(UnityEngine_SendMouseEvents_HitInfo_var);
    FUN_02d965b8(PTR_DAT_06a119e8);
    FUN_02d965b8(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<QosResult>>_TypeInfo);
    DAT_06dbb63e = 1;
  }
  local_54[0] = '\0';
  local_68 = 0;
  local_60 = 0;
  local_6c[0] = '\0';
  local_70[0] = '\0';
  uVar5 = FUN_055b48e4(param_1,param_2,&local_48,param_4,param_5,param_6,param_7,local_54,&local_60,
                       &local_68,local_6c,local_70);
  if ((uVar5 & 1) != 0) {
    return local_70[0] != '\0';
  }
  if ((local_48 == (long *)0x0) ||
     (uVar5 = (**(code **)(*local_48 + 0x1a8))(local_48,*(undefined8 *)(*local_48 + 0x1b0)),
     (uVar5 & 1) == 0)) {
    cVar1 = local_54[0];
    if ((param_2 == 0) || (param_1 == 0)) goto LAB_055b48e0;
    lVar10 = 0;
    if (local_54[0] != '\0') {
      lVar10 = local_60;
    }
    lVar10 = FUN_055aeed0(param_1,param_6,*(undefined8 *)(param_2 + 0x40),local_68,param_2,param_4,
                          param_5,lVar10);
  }
  else {
    if (local_6c[0] == '\0') {
      if (param_2 == 0) goto LAB_055b48e0;
      if (*(char *)(param_2 + 0x81) != '\0') {
        plVar13 = *(long **)(param_2 + 0x68);
        if (plVar13 == (long *)0x0) goto LAB_055b48e0;
        lVar10 = *plVar13;
        uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar5 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)
                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
               ) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_055b462c;
            }
            uVar5 = uVar5 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02dd004c(plVar13,*(long *)
                                       System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                              ,1);
LAB_055b462c:
        local_60 = (*(code *)*puVar6)(plVar13,param_7,puVar6[1]);
        goto LAB_055b4640;
      }
    }
    else {
LAB_055b4640:
      if (param_2 == 0) goto LAB_055b48e0;
    }
    lVar10 = FUN_055aeab8(param_1,local_48,param_6,*(undefined8 *)(param_2 + 0x40),local_60);
    cVar1 = local_54[0];
  }
  if ((cVar1 != '\0') && (lVar10 == local_60)) {
    return true;
  }
  if (param_4 == (long *)0x0) {
LAB_055b46a0:
    param_4 = (long *)0x0;
  }
  else {
    bVar2 = *(byte *)(*(long *)UnityEngine_SendMouseEvents_HitInfo_var + 0x130);
    if (*(byte *)(*param_4 + 0x130) < bVar2) goto LAB_055b46a0;
    if (*(long *)(*(long *)(*param_4 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)UnityEngine_SendMouseEvents_HitInfo_var) {
      param_4 = (long *)0x0;
    }
  }
  uVar5 = FUN_055b4e68(param_1,param_2,param_4,lVar10);
  if ((uVar5 & 1) == 0) {
    return cVar1 != '\0';
  }
  plVar13 = *(long **)(param_2 + 0x68);
  if (plVar13 == (long *)0x0) goto LAB_055b48e0;
  lVar11 = *plVar13;
  uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar5 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_055b472c;
      }
      uVar5 = uVar5 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)
           FUN_02dd004c(plVar13,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,0);
LAB_055b472c:
  (*(code *)*puVar6)(plVar13,param_7,lVar10,puVar6[1]);
  puVar3 = System_Net_ServicePoint_var;
  if (*(long *)(param_2 + 200) != 0) {
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)System_Net_ServicePoint_var) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_055b47a4;
          }
          uVar5 = uVar5 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)System_Net_ServicePoint_var,0);
LAB_055b47a4:
      iVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if (3 < iVar4) {
        if (param_6 == (long *)0x0) goto LAB_055b48e0;
        lVar10 = *(long *)(param_1 + 0x28);
        uVar7 = (**(code **)(*param_6 + 0x1c8))(param_6,*(undefined8 *)(*param_6 + 0x1d0));
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fc178);
        }
        uVar8 = FUN_0547e2f8(0);
        uVar8 = FUN_05588558(*(undefined8 *)
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<QosResult>>_TypeInfo
                             ,uVar8,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x50),
                             0);
        if (*(int *)(*(long *)PTR_DAT_06a119e8 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_06a119e8);
        }
        uVar9 = thunk_FUN_02dd3048(param_6,*(undefined8 *)UnityEngine_UIElements_PanelRaycaster_var)
        ;
        uVar7 = FUN_05570ab4(uVar9,uVar7,uVar8,0);
        if (lVar10 == 0) goto LAB_055b48e0;
        FUN_02cfc328(1,*(undefined8 *)puVar3,lVar10,4,uVar7,0);
      }
    }
    lVar10 = *(long *)(param_2 + 200);
    local_74[0] = 1;
    uVar7 = thunk_FUN_02dd2d7c(*(undefined8 *)(PTR_DAT_069fb9c0 + 0x28),local_74);
    if (lVar10 == 0) {
LAB_055b48e0:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(lVar10 + 0x18))
              (*(undefined8 *)(lVar10 + 0x40),param_7,uVar7,*(undefined8 *)(lVar10 + 0x28));
  }
  return true;
}


