/*
FUNCTION_NAME: FUN_03fcb574
ENTRY_POINT: 03fcb574
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;telemetry_or_network_hits_5
*/


void FUN_03fcb574(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  
  if ((DAT_0483b9da & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(PTR_DAT_045833f8);
    thunk_FUN_01efb3a4(PTR_DAT_04583500);
    thunk_FUN_01efb3a4(PTR_DAT_04581ae8);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04583e80);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__
                      );
    DAT_0483b9da = 1;
  }
  if (param_3 == 0) goto LAB_03fcb894;
  if (*(int *)(param_3 + 0x10) == 1) {
    uVar2 = FUN_03409f80(param_3,0,0);
    puVar1 = Method_System_IO_CStreamReader_Read__;
    if (*(int *)(*(long *)Method_System_IO_CStreamReader_Read__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)Method_System_IO_CStreamReader_Read__);
    }
    uVar5 = FUN_034fc34c(uVar2,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_034fc974(uVar2,0);
      iVar3 = FUN_03fcb904();
      if (*(long *)(param_1 + 0x98) != 0) {
        iVar4 = FUN_0265d6c4(*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_04583e80);
        if (iVar4 <= iVar3) goto LAB_03fcb898;
        if (*(long *)(param_1 + 0x98) != 0) {
          uVar6 = FUN_0265d74c(*(long *)(param_1 + 0x98),iVar3,
                               *(undefined8 *)
                                Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetupSettings>b__10_2__
                              );
          if (*(char *)(param_1 + 0xb0) == '\0') {
            if (param_2 != 0) goto LAB_03fcb804;
          }
          else if (param_2 != 0) {
            uVar5 = FUN_03faf21c(param_2,uVar6,0);
            if ((uVar5 & 1) == 0) {
              uVar7 = FUN_023351b4(param_2,uVar6,*(undefined8 *)PTR_DAT_045833f8);
              FUN_03faf2e4(param_2,uVar6,uVar7,0);
            }
LAB_03fcb804:
            FUN_023351b4(param_2,uVar6,*(undefined8 *)PTR_DAT_045833f8);
            return;
          }
        }
      }
      goto LAB_03fcb894;
    }
    goto LAB_03fcb898;
  }
  if ((param_2 == 0) || (lVar8 = FUN_03f88f74(*(undefined8 *)(param_2 + 0x10),0), lVar8 == 0))
  goto LAB_03fcb894;
  uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,param_3,0);
  lVar8 = *(long *)(param_2 + 0x10);
  if ((uVar5 & 1) != 0) {
    lVar8 = FUN_03f88f74(lVar8,0);
    if (lVar8 == 0) goto LAB_03fcb894;
    goto LAB_03fcb87c;
  }
  if (lVar8 == 0) goto LAB_03fcb894;
  uVar6 = FUN_03ed2520(lVar8,0);
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0) == 0)
  {
    thunk_FUN_01ee6d7c(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  }
  uVar5 = FUN_04073094(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
LAB_03fcb7b0:
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_03fcb894;
    uVar5 = FUN_03ed25a4(*(long *)(param_2 + 0x10),0);
    if ((uVar5 & 0xff) != 0) {
      lVar8 = thunk_FUN_03f880a4(uVar5,0);
      if (lVar8 == 0) goto LAB_03fcb894;
      uVar9 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,param_3,0);
      if ((uVar9 & 1) != 0) {
        lVar8 = thunk_FUN_03f880a4(uVar5,0);
        goto joined_r0x03fcb7a8;
      }
    }
    lVar8 = thunk_FUN_03f862f0(0);
    if (lVar8 == 0) goto LAB_03fcb894;
    uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,param_3,0);
    if ((uVar5 & 1) == 0) {
      lVar8 = thunk_FUN_03f87820(0);
      if (lVar8 == 0) goto LAB_03fcb894;
      uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,param_3,0);
      if ((uVar5 & 1) == 0) {
LAB_03fcb898:
        uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04583e88);
        uVar7 = thunk_FUN_01efb3a4(PTR_DAT_04583e90);
        uVar6 = FUN_0340ebc0(uVar6,param_3,uVar7,0);
        thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MoveTowards<float>__ctor__);
        uVar7 = thunk_FUN_01f117cc();
        FUN_0356adc8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01efb3a4(PTR_DAT_04583e98);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,uVar6);
      }
      lVar8 = thunk_FUN_03f87820(0);
    }
    else {
      lVar8 = thunk_FUN_03f862f0(0);
    }
  }
  else {
    lVar8 = FUN_03f8920c(uVar6,0);
    if (lVar8 == 0) goto LAB_03fcb894;
    uVar5 = UnityEngine_Rendering_AsyncGPUReadbackRequest__IsDone(lVar8,param_3,0);
    if ((uVar5 & 1) == 0) goto LAB_03fcb7b0;
    lVar8 = FUN_03f8920c(uVar6,0);
  }
joined_r0x03fcb7a8:
  if (lVar8 != 0) {
LAB_03fcb87c:
    FUN_03f88640(lVar8,param_3,0);
    return;
  }
LAB_03fcb894:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


