/*
FUNCTION_NAME: FUN_077d50ec
ENTRY_POINT: 077d50ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_077d50ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_08987172 & 1) == 0) {
    FUN_03a8a718(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_03a8a718(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(PTR_DAT_08489fe8);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_BaseSlider<int>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseSlider<float>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo);
    DAT_08987172 = 1;
  }
  puVar4 = UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo;
  puVar3 = UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo;
  puVar2 = PTR_DAT_08489fe8;
  puVar1 = PTR_DAT_08488640;
  plVar10 = *(long **)(param_1 + 0x38);
  if (plVar10 == (long *)0x0) {
    return;
  }
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
  FUN_05e38d24(uVar5,param_1,*(undefined8 *)puVar3,0);
  lVar7 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
        goto LAB_077d5230;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,0xb);
LAB_077d5230:
  (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
  plVar10 = *(long **)(param_1 + 0x38);
  uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
  FUN_066b5934(uVar5,param_1,*(undefined8 *)puVar4,0);
  puVar3 = 
  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
  ;
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
          goto LAB_077d52bc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,3);
LAB_077d52bc:
    (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
    plVar10 = *(long **)(param_1 + 0x38);
    uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_066b5934(uVar5,param_1,*(undefined8 *)puVar3,0);
    puVar4 = UnityEngine_UIElements_BaseSlider<float>_TypeInfo;
    puVar3 = System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo;
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
            goto LAB_077d5350;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,5);
LAB_077d5350:
      (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
      plVar10 = *(long **)(param_1 + 0x38);
      uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar3);
      FUN_05e38d24(uVar5,param_1,*(undefined8 *)puVar4,0);
      puVar3 = UnityEngine_UIElements_BaseSlider<int>_TypeInfo;
      if (plVar10 != (long *)0x0) {
        lVar7 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 7) * 0x10 + 0x138);
              goto LAB_077d53dc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,7);
LAB_077d53dc:
        (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
        plVar10 = *(long **)(param_1 + 0x38);
        uVar5 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
        FUN_066b5934(uVar5,param_1,*(undefined8 *)puVar3,0);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 9) * 0x10 + 0x138);
                goto LAB_077d5460;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_03ac43c4(plVar10,*(long *)puVar2,9);
LAB_077d5460:
                    /* WARNING: Could not recover jumptable at 0x077d547c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar6)(plVar10,uVar5,puVar6[1]);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


