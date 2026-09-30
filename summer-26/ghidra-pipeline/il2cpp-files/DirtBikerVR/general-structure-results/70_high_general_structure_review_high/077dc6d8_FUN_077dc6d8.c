/*
FUNCTION_NAME: FUN_077dc6d8
ENTRY_POINT: 077dc6d8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_19;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3
*/


void FUN_077dc6d8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_58;
  
  if ((DAT_089871cb & 1) == 0) {
    FUN_03a8a718(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_03a8a718(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488640);
    FUN_03a8a718(System_Comparison<OVROverlayCanvas>_TypeInfo);
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(PTR_DAT_08489fe8);
    FUN_03a8a718(
                UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
                );
    FUN_03a8a718(UnityEngine_UIElements_BaseSlider<int>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_BaseSlider<float>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo);
    FUN_03a8a718(System_Comparison<OVRSpaceUser>_TypeInfo);
    FUN_03a8a718(UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo);
    DAT_089871cb = 1;
  }
  puVar3 = PTR_DAT_08488b88;
  puVar2 = PTR_DAT_08488640;
  lVar12 = *(long *)(param_1 + 8);
  local_58 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_077dcf5c:
    FUN_0666e9a8(&local_58,0);
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488640);
    puVar5 = System_Comparison<OVRSpaceUser>_TypeInfo;
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)System_Comparison<OVRSpaceUser>_TypeInfo,0);
    puVar4 = PTR_DAT_08489fe8;
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08489fe8) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_077dc85c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)PTR_DAT_08489fe8,1);
LAB_077dc85c:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)puVar5,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_077dc8dc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0);
LAB_077dc8dc:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    puVar5 = System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo;
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    puVar6 = UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo;
    FUN_05e38d24(uVar7,lVar12,
                 *(undefined8 *)UnityEngine_UIElements_UIR_BasicNodePool<MeshHandle>_TypeInfo,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
          goto LAB_077dc970;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0xb);
LAB_077dc970:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05e38d24(uVar7,lVar12,*(undefined8 *)puVar6,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 10) * 0x10 + 0x138);
          goto LAB_077dc9f4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,10);
LAB_077dc9f4:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    puVar5 = UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo;
    FUN_066b5934(uVar7,lVar12,
                 *(undefined8 *)UnityEngine_UIElements_UIR_BasicNodePool<TextureEntry>_TypeInfo,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_077dca80;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,3);
LAB_077dca80:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)puVar5,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_077dcb04;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,2);
LAB_077dcb04:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    puVar5 = 
    UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
    ;
    FUN_066b5934(uVar7,lVar12,
                 *(undefined8 *)
                  UnityEngine_Rendering_RenderGraphModule_BaseRenderFunc<ScreenSpaceShadows_ScreenSpaceShadowsPostPass_PassData,_RasterGraphContext>_TypeInfo
                 ,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
          goto LAB_077dcb90;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,5);
LAB_077dcb90:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)puVar5,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 4) * 0x10 + 0x138);
          goto LAB_077dcc14;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,4);
LAB_077dcc14:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    puVar5 = System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo;
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    puVar6 = UnityEngine_UIElements_BaseSlider<float>_TypeInfo;
    FUN_05e38d24(uVar7,lVar12,*(undefined8 *)UnityEngine_UIElements_BaseSlider<float>_TypeInfo,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
          goto LAB_077dcca8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,7);
LAB_077dcca8:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar5);
    FUN_05e38d24(uVar7,lVar12,*(undefined8 *)puVar6,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 6) * 0x10 + 0x138);
          goto LAB_077dcd2c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,6);
LAB_077dcd2c:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    puVar5 = UnityEngine_UIElements_BaseSlider<int>_TypeInfo;
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)UnityEngine_UIElements_BaseSlider<int>_TypeInfo,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_077dcdb8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,9);
LAB_077dcdb8:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    uVar7 = thunk_FUN_03ac74bc(*(undefined8 *)puVar2);
    FUN_066b5934(uVar7,lVar12,*(undefined8 *)puVar5,0);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_077dce3c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,8);
LAB_077dce3c:
    (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
    plVar13 = *(long **)(lVar12 + 0x38);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
          goto LAB_077dcea4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0xc);
LAB_077dcea4:
    uVar10 = (*(code *)*puVar8)(plVar13,puVar8[1]);
    if ((uVar10 & 1) == 0) {
      if (*(char *)(lVar12 + 0x40) != '\0') {
        plVar13 = *(long **)(lVar12 + 0x38);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        lVar9 = *plVar13;
        uVar7 = *(undefined8 *)(lVar12 + 0x48);
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0x45) * 0x10 + 0x138);
              goto LAB_077dcf18;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)FUN_03ac43c4(plVar13,*(long *)puVar4,0x45);
LAB_077dcf18:
        (*(code *)*puVar8)(plVar13,uVar7,puVar8[1]);
      }
      if (*(char *)(lVar12 + 0x50) == '\0') goto LAB_077dcf6c;
      lVar9 = FUN_077d5580(lVar12,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      local_58 = FUN_067c4bec(lVar9,0);
      uVar10 = FUN_0666e8e0(&local_58,0);
      if ((uVar10 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = local_58;
        thunk_FUN_03afed3c(param_1 + 10,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_043e6a84(param_1 + 2,&local_58,param_1,
                     *(undefined8 *)System_Comparison<OVROverlayCanvas>_TypeInfo);
        return;
      }
      goto LAB_077dcf5c;
    }
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_077dcf6c:
  lVar9 = *(long *)puVar3;
  *(undefined1 *)(lVar12 + 0x60) = 1;
  iVar1 = *(int *)(lVar9 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


