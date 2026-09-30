/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_DestinationArray_GetNextUrl
ENTRY_POINT: 055bd190
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8 Oculus_Platform_CAPI__ovr_DestinationArray_GetNextUrl(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  undefined8 uVar10;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long unaff_x27;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar6;
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x9f0));
  *(undefined1 *)(unaff_x27 + 0x666) = 1;
  if (unaff_x19 == 0) goto LAB_055bd490;
  if ((((*(char *)(unaff_x19 + 0x80) != '\0') || (*(char *)(unaff_x19 + 0x81) == '\0')) ||
      (uVar2 = FUN_055bda78(), (uVar2 & 1) == 0)) || (uVar2 = FUN_055bdccc(), (uVar2 & 1) == 0)) {
LAB_055bd1ac:
    *unaff_x24 = 0;
    LeanTween__value();
    *unaff_x21 = 0;
    LeanTween__value();
    return 0;
  }
  plVar11 = (long *)(unaff_x19 + 0x48);
  if (*plVar11 == 0) {
    if ((*(long *)(unaff_x25 + 0x20) == 0) ||
       (plVar12 = *(long **)(*(long *)(unaff_x25 + 0x20) + 0x40), plVar12 == (long *)0x0))
    goto LAB_055bd490;
    lVar8 = *plVar12;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar2 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)System_Action<ZipArchiveEntry>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_055bd298;
        }
        uVar2 = uVar2 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(plVar12,*(long *)System_Action<ZipArchiveEntry>_TypeInfo,0);
LAB_055bd298:
    lVar8 = (*(code *)*puVar3)(plVar12,uVar13,puVar3[1]);
    *plVar11 = lVar8;
    LeanTween__value(plVar11,lVar8);
  }
  plVar12 = *(long **)(unaff_x19 + 0x68);
  if (plVar12 == (long *)0x0) {
LAB_055bd490:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar8 = *plVar12;
  uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar2 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_055bd318;
      }
      uVar2 = uVar2 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)
           FUN_02dd004c(plVar12,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,1);
LAB_055bd318:
  lVar8 = (*(code *)*puVar3)(plVar12);
  *unaff_x21 = lVar8;
  LeanTween__value();
  lVar8 = *plVar11;
  if (lVar8 == 0) goto LAB_055bd490;
  if ((*(char *)(lVar8 + 0x29) == '\0') && (lVar8 = 0, *unaff_x21 != 0)) {
    lVar8 = FUN_055b9230();
  }
  *unaff_x24 = lVar8;
  LeanTween__value();
  puVar6 = UnityEngine_SendMouseEvents_HitInfo_var;
  uVar2 = FUN_055bc3a8();
  if ((uVar2 & 1) == 0) goto LAB_055bd1ac;
  uVar2 = FUN_055b869c();
  if ((uVar2 & 1) != 0) {
    FUN_055abb58();
    FUN_055b8840();
    return 0;
  }
  uVar2 = FUN_055bc484();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (*unaff_x21 != 0) {
    return 1;
  }
  if (unaff_x22 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar6 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x22 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar6) {
        unaff_x22 = (long *)0x0;
      }
      goto LAB_055bd460;
    }
  }
  unaff_x22 = (long *)0x0;
LAB_055bd460:
  uVar2 = *(ulong *)(unaff_x19 + 0x10);
  if ((uVar2 & 0xff) == 0) {
    if (unaff_x22 == (long *)0x0) {
      return 1;
    }
    uVar2 = unaff_x22[0x19];
  }
  iVar7 = (int)(uVar2 >> 0x20);
  if (iVar7 == 3) {
    FUN_02979e58();
    uVar13 = FUN_05580e2c();
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar4 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    puVar6 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo;
  }
  else {
    if (iVar7 != 2) {
      return 1;
    }
    FUN_02979e58();
    uVar13 = FUN_05580e2c();
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar4 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar10 = *(undefined8 *)(unaff_x19 + 0x30);
    puVar6 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StoredMatchmakingResults>_TypeInfo;
  }
  uVar5 = thunk_FUN_02dfd288(puVar6);
  uVar4 = FUN_055873e0(uVar5,uVar4,uVar10,0);
  uVar13 = FUN_055751a0(0,uVar13,uVar4,0,0);
  uVar4 = thunk_FUN_02dfd288(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar13,uVar4);
}


