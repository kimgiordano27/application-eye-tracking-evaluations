/*
FUNCTION_NAME: FUN_063a7f38
ENTRY_POINT: 063a7f38
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_17
*/


long FUN_063a7f38(long *param_1,byte param_2,char *param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  long local_48;
  
  puVar2 = Method_System_Net_WebRequest_get_RequestUri__;
  if ((DAT_06dcbc05 & 1) == 0) {
    FUN_02d965b8(Method_System_Net_Configuration_WebRequestModulesSection_get_Properties__);
    FUN_02d965b8(Method_System_Net_WebRequestStream_CheckWriteOverflow__);
    FUN_02d965b8(Method_System_Net_WebRequest_get_RequestUri__);
    FUN_02d965b8(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d965b8(Method_System_Net_WebRequestStream_TryReadFromBufferedContent__);
    FUN_02d965b8(Method_System_Net_WebRequestStream_WriteAsync__);
    FUN_02d965b8(Method_UnityEngineInternal_WebRequestUtils_MakeInitialUrl__);
    FUN_02d965b8(Method_System_Net_WebResponse_GetResponseStream__);
    DAT_06dcbc05 = 1;
  }
  local_48 = 0;
  *param_3 = '\0';
  fVar9 = (float)FUN_06356d50(0);
  lVar5 = *(long *)puVar2;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar5 = *(long *)puVar2;
  }
  lVar8 = *(long *)(lVar5 + 0xb8);
  fVar10 = fVar9 - *(float *)(lVar8 + 0x10);
  if ((30.0 < fVar10) || (fVar10 < 0.0)) {
LAB_063a8040:
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_063a82bc();
    lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
    *(float *)(lVar5 + 0x10) = fVar9;
    *(undefined4 *)(lVar5 + 0x14) = 0;
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar2;
      lVar8 = *(long *)(lVar5 + 0xb8);
    }
    if (500 < *(int *)(lVar8 + 0x14)) goto LAB_063a8040;
  }
  if (param_1 != (long *)0x0) {
    uVar4 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar5);
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      uVar6 = FUN_04d98194(**(long **)(lVar5 + 0xb8),uVar4,&local_48,
                           *(undefined8 *)
                            Method_System_Net_Configuration_WebRequestModulesSection_get_Properties__
                          );
      lVar5 = *(long *)puVar2;
      if ((uVar6 & 1) == 0) {
        lVar5 = thunk_FUN_02dd3144();
        FUN_063a84e4();
        lVar8 = thunk_FUN_02dd3144(*(undefined8 *)Method_System_Net_WebResponse_GetResponseStream__)
        ;
        FUN_0552aca4(lVar8,0);
        puVar3 = Method_System_Net_WebRequestStream_TryReadFromBufferedContent__;
        *(undefined4 *)(lVar8 + 0x14) = uVar4;
        *(float *)(lVar8 + 0x10) = fVar9;
        uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
        FUN_03e93524(uVar7,lVar8,*(undefined8 *)Method_System_Net_WebRequestStream_Close_internal__)
        ;
        if (lVar5 != 0) {
          *(undefined8 *)(lVar5 + 0xb0) = uVar7;
          LeanTween__value((undefined8 *)(lVar5 + 0xb0),uVar7);
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar8 = *(long *)puVar2;
          }
          if (**(long **)(lVar8 + 0xb8) != 0) {
            FUN_04d966a4(**(long **)(lVar8 + 0xb8),uVar4,lVar5,
                         *(undefined8 *)Method_System_Net_WebRequestStream_CheckWriteOverflow__);
            FUN_0642c410(lVar5,uVar4,0);
            FUN_0642c83c(lVar5,0);
            lVar8 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            if (lVar8 != 0) {
              FUN_03e9673c(lVar8,uVar7,
                           *(undefined8 *)Method_System_Net_WebRequestStream_WriteAsync__);
              lVar8 = *(long *)puVar2;
              *(byte *)(lVar5 + 0xb8) = param_2 & 1;
              *(int *)(*(long *)(lVar8 + 0xb8) + 0x14) =
                   *(int *)(*(long *)(lVar8 + 0xb8) + 0x14) + 1;
              return lVar5;
            }
          }
        }
      }
      else {
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar5 = *(long *)puVar2;
        }
        if ((((local_48 != 0) && (lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8), lVar5 != 0)) &&
            (FUN_03e96ba4(lVar5,*(undefined8 *)(local_48 + 0xb0),
                          *(undefined8 *)Method_UnityEngineInternal_WebRequestUtils_MakeInitialUrl__
                         ), local_48 != 0)) &&
           (lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8), lVar5 != 0)) {
          FUN_03e9673c(lVar5,*(undefined8 *)(local_48 + 0xb0),
                       *(undefined8 *)Method_System_Net_WebRequestStream_WriteAsync__);
          if ((param_2 & 1) == 0) {
            *param_3 = '\x01';
            if (local_48 != 0) {
              return local_48;
            }
          }
          else if (local_48 != 0) {
            cVar1 = *(char *)(local_48 + 0xb8);
            *param_3 = cVar1;
            if (cVar1 == '\0') {
              FUN_0642c410(local_48,uVar4,0);
              if ((local_48 == 0) || (FUN_0642c83c(local_48,0), local_48 == 0)) goto LAB_063a82a0;
              *(undefined1 *)(local_48 + 0xb8) = 1;
            }
            return local_48;
          }
        }
      }
    }
  }
LAB_063a82a0:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


