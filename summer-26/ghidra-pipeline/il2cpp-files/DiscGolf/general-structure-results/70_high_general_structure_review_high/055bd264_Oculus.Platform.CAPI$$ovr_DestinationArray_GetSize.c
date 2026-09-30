/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_DestinationArray_GetSize
ENTRY_POINT: 055bd264
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


undefined8
Oculus_Platform_CAPI__ovr_DestinationArray_GetSize(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  long in_x9;
  ulong uVar9;
  int *in_x10;
  int *piVar10;
  long unaff_x19;
  undefined8 uVar11;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x27;
  long *plVar12;
  undefined *puVar7;
  
  do {
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_055bd298;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
  } while (in_x9 != 0);
  puVar2 = (undefined8 *)FUN_02dd004c();
LAB_055bd298:
  lVar3 = (*(code *)*puVar2)();
  *unaff_x27 = lVar3;
  LeanTween__value();
  plVar12 = *(long **)(unaff_x19 + 0x68);
  if (plVar12 == (long *)0x0) {
LAB_055bd490:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar3 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar10 + 1) * 0x10 + 0x138);
        goto LAB_055bd318;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)
           FUN_02dd004c(plVar12,*(long *)
                                 System_Runtime_CompilerServices_AsyncTaskMethodBuilder<IList<ISessionInfo>>_TypeInfo
                        ,1);
LAB_055bd318:
  lVar3 = (*(code *)*puVar2)(plVar12);
  *unaff_x21 = lVar3;
  LeanTween__value();
  lVar3 = *unaff_x27;
  if (lVar3 == 0) goto LAB_055bd490;
  if ((*(char *)(lVar3 + 0x29) == '\0') && (lVar3 = 0, *unaff_x21 != 0)) {
    lVar3 = FUN_055b9230();
  }
  *unaff_x24 = lVar3;
  LeanTween__value();
  puVar7 = UnityEngine_SendMouseEvents_HitInfo_var;
  uVar9 = FUN_055bc3a8();
  if ((uVar9 & 1) == 0) {
    *unaff_x24 = 0;
    LeanTween__value();
    *unaff_x21 = 0;
    LeanTween__value();
    return 0;
  }
  uVar9 = FUN_055b869c();
  if ((uVar9 & 1) != 0) {
    FUN_055abb58();
    FUN_055b8840();
    return 0;
  }
  uVar9 = FUN_055bc484();
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  if (*unaff_x21 != 0) {
    return 1;
  }
  if (unaff_x22 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
    if (bVar1 <= *(byte *)(*unaff_x22 + 0x130)) {
      if (*(long *)(*(long *)(*unaff_x22 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7) {
        unaff_x22 = (long *)0x0;
      }
      goto LAB_055bd460;
    }
  }
  unaff_x22 = (long *)0x0;
LAB_055bd460:
  uVar9 = *(ulong *)(unaff_x19 + 0x10);
  if ((uVar9 & 0xff) == 0) {
    if (unaff_x22 == (long *)0x0) {
      return 1;
    }
    uVar9 = unaff_x22[0x19];
  }
  iVar8 = (int)(uVar9 >> 0x20);
  if (iVar8 == 3) {
    FUN_02979e58();
    uVar4 = FUN_05580e2c();
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar5 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
    puVar7 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo;
  }
  else {
    if (iVar8 != 2) {
      return 1;
    }
    FUN_02979e58();
    uVar4 = FUN_05580e2c();
    thunk_FUN_02dfd288(PTR_DAT_069fc178);
    FUN_0297e1b4();
    uVar5 = FUN_0547e2f8(0);
    FUN_02979e58();
    uVar11 = *(undefined8 *)(unaff_x19 + 0x30);
    puVar7 = 
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder<StoredMatchmakingResults>_TypeInfo;
  }
  uVar6 = thunk_FUN_02dfd288(puVar7);
  uVar5 = FUN_055873e0(uVar6,uVar5,uVar11,0);
  uVar4 = FUN_055751a0(0,uVar4,uVar5,0,0);
  uVar5 = thunk_FUN_02dfd288(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_TypeInfo
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar5);
}


