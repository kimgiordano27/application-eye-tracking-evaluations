/*
FUNCTION_NAME: FUN_05d78eac
ENTRY_POINT: 05d78eac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_05d78eac(long param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined8 local_48;
  
  if ((DAT_06b82cb0 & 1) == 0) {
    FUN_02d6084c(Method_System_Nullable<Guid>__ctor__);
    FUN_02d6084c(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    FUN_02d6084c(Method_System_Nullable<Guid>_GetValueOrDefault__);
    FUN_02d6084c(Method_OVRNativeList<long>_Add__);
    FUN_02d6084c(Method_OVRNativeList<long>_Dispose__);
    FUN_02d6084c(Method_OVRNativeList<long>_get_Count__);
    FUN_02d6084c(PTR_DAT_0676ba80);
    FUN_02d6084c(PTR_DAT_067693b8);
    DAT_06b82cb0 = 1;
  }
  local_48 = 0;
  sVar4 = FUN_05d779e4(param_1,0);
  puVar2 = Method_OVRNativeList<long>_get_Count__;
  if (sVar4 == 0x5b) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d79224;
    if (*(int *)(param_1 + 0x18) < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      FUN_05d77a0c(param_1);
      lVar5 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Nullable<Guid>_GetValueOrDefault__);
      FUN_03aabc60(lVar5,*(undefined8 *)Method_System_Nullable<OVRPlugin_Result>__ctor__);
      puVar3 = Method_System_Nullable<Guid>__ctor__;
      puVar2 = PTR_DAT_067693b8;
      while( true ) {
        do {
          iVar7 = *(int *)(param_1 + 0x18);
          do {
            if (iVar7 < 0) goto LAB_05d791c4;
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d79224;
            if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= iVar7) goto LAB_05d7911c;
            sVar4 = FUN_05d779e4(param_1,0);
            if (sVar4 == 0x5d) {
              iVar7 = *(int *)(param_1 + 0x18);
              goto LAB_05d79118;
            }
            auVar11 = FUN_05d79228(param_1,&local_48);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if ((auVar11._0_8_ & 0xff) == 0) {
              *param_2 = 0;
              thunk_FUN_02dd37b4(param_2,0);
              return auVar11;
            }
            if (lVar5 == 0) goto LAB_05d79224;
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar10 = *(long *)puVar3;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_05d79224;
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = local_48;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494(lVar5,local_48,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            FUN_05d77a0c(param_1);
            iVar7 = *(int *)(param_1 + 0x18);
          } while (iVar7 < 0);
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d79224;
        } while ((*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= iVar7) ||
                (sVar4 = FUN_05d779e4(param_1,0), sVar4 != 0x2c));
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d79224;
        iVar7 = *(int *)(param_1 + 0x18);
        if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) <= iVar7) break;
        *(int *)(param_1 + 0x18) = iVar7 + 1;
        FUN_05d77a0c(param_1);
      }
LAB_05d79118:
      if (-1 < iVar7) {
LAB_05d7911c:
        if (*(long *)(param_1 + 0x20) == 0) {
LAB_05d79224:
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        if ((iVar7 < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) &&
           (sVar4 = FUN_05d779e4(param_1,0), sVar4 == 0x5d)) {
          if (*(long *)(param_1 + 0x20) == 0) goto LAB_05d79224;
          if (*(int *)(param_1 + 0x18) < *(int *)(*(long *)(param_1 + 0x20) + 0x10)) {
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            lVar8 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0676ba80);
            FUN_0504920c(lVar8,0);
            *(long *)(lVar8 + 0x10) = lVar5;
            thunk_FUN_02dd37b4((long *)(lVar8 + 0x10),lVar5);
            *param_2 = lVar8;
            thunk_FUN_02dd37b4(param_2,lVar8);
            lVar5 = *(long *)puVar2;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *(long *)puVar2;
            }
            return *(undefined1 (*) [16])(*(long *)(lVar5 + 0xb8) + 8);
          }
        }
      }
LAB_05d791c4:
      *param_2 = 0;
      thunk_FUN_02dd37b4(param_2,0);
      puVar9 = (undefined8 *)Method_OVRNativeList<long>_Dispose__;
      goto LAB_05d791dc;
    }
    *param_2 = 0;
    thunk_FUN_02dd37b4(param_2,0);
    puVar9 = (undefined8 *)Method_OVRNativeList<long>_Add__;
LAB_05d791dc:
    uVar6 = *puVar9;
  }
  else {
    *param_2 = 0;
    thunk_FUN_02dd37b4(param_2,0);
    uVar6 = *(undefined8 *)puVar2;
  }
  auVar11 = FUN_05d77744(param_1,uVar6);
  return auVar11;
}


