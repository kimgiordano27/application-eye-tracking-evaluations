/*
FUNCTION_NAME: FUN_05febc78
ENTRY_POINT: 05febc78
PROGRAM: beastcraft-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_05febc78(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 local_38;
  
  if ((DAT_06e94bc5 & 1) == 0) {
    FUN_02e3ca1c(System_Func<ThreadStart,_Thread>_TypeInfo);
    FUN_02e3ca1c(System_Func<OfflinePlayerActor,_bool>_TypeInfo);
    FUN_02e3ca1c(System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo);
    FUN_02e3ca1c(PTR_DAT_06a79150);
    FUN_02e3ca1c(PTR_DAT_06a78fb8);
    FUN_02e3ca1c(PTR_DAT_06a78ce8);
    FUN_02e3ca1c(PTR_DAT_06a2f8e0);
    FUN_02e3ca1c(PTR_DAT_06a2f8f0);
    FUN_02e3ca1c(PTR_DAT_06a2f8f8);
    FUN_02e3ca1c(System_Func<OpenXRFeature,_bool>_TypeInfo);
    FUN_02e3ca1c(System_Func<OpenXRFeature,_int>_TypeInfo);
    FUN_02e3ca1c(System_Func<OpenXRFeature,_string>_TypeInfo);
    DAT_06e94bc5 = 1;
  }
  puVar3 = System_Func<JsonProperty,_JsonSerializerInternalReader_PropertyPresence>_TypeInfo;
  local_38 = 0;
  if (*param_1 != 0) {
    lVar13 = *(long *)(param_1 + 8);
    lVar5 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a79150);
    *(undefined4 *)(lVar5 + 0x20) = 0x14;
    FUN_05648568(lVar5,0);
    lVar6 = thunk_FUN_02e78ab8(*(undefined8 *)PTR_DAT_06a2f8f8);
    FUN_03f2ada4(lVar6,*(undefined8 *)PTR_DAT_06a2f8f0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    if (lVar6 != 0) {
      lVar10 = *(long *)(lVar6 + 0x10);
      uVar9 = *(undefined8 *)(lVar13 + 0x10);
      lVar13 = *(long *)PTR_DAT_06a2f8e0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar10 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
          thunk_FUN_02ee2be8();
        }
        else {
          FUN_03f2b60c(lVar6,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x18) = lVar6;
        thunk_FUN_02ee2be8((long *)(lVar5 + 0x18),lVar6);
        plVar7 = (long *)FUN_05fe3754();
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a78ce8) {
              puVar8 = (undefined8 *)(lVar6 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_05febe88;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)PTR_DAT_06a78ce8,2);
LAB_05febe88:
        plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        lVar6 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06a78fb8) {
              puVar8 = (undefined8 *)(lVar6 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_05febef0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar8 = (undefined8 *)FUN_02e759c0(plVar7,*(long *)PTR_DAT_06a78fb8,0);
LAB_05febef0:
        lVar5 = (*(code *)*puVar8)(plVar7,lVar5,puVar8[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02e3ccc4();
        }
        local_38 = FUN_046decbc(lVar5,*(undefined8 *)System_Func<OpenXRFeature,_string>_TypeInfo);
        uVar11 = FUN_046bbfb4(&local_38,*(undefined8 *)System_Func<OpenXRFeature,_int>_TypeInfo);
        if ((uVar11 & 1) == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 10) = local_38;
          thunk_FUN_02ee2be8(param_1 + 10,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_03565fc8(param_1 + 2,&local_38,param_1,
                       *(undefined8 *)System_Func<ThreadStart,_Thread>_TypeInfo);
          return;
        }
        goto LAB_05febf30;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  local_38 = *(undefined8 *)(param_1 + 10);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -1;
LAB_05febf30:
  uVar9 = FUN_046bbff4(&local_38,*(undefined8 *)System_Func<OpenXRFeature,_bool>_TypeInfo);
  puVar4 = System_Func<OfflinePlayerActor,_bool>_TypeInfo;
  iVar1 = *(int *)(*(long *)puVar3 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_04480718(param_1 + 2,uVar9,*(undefined8 *)puVar4);
  return;
}


