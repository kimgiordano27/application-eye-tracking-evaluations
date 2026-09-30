/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.XRCameraFrameExifData$$TryGetColorSpace
ENTRY_POINT: 05dbe71c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_17;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_ARSubsystems_XRCameraFrameExifData__TryGetColorSpace(long param_1)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long unaff_x19;
  int unaff_w20;
  uint uVar22;
  long unaff_x21;
  ulong uVar23;
  long *unaff_x22;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar37;
  ulong uVar35;
  double dVar36;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  float fVar44;
  float fStack0000000000000014;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  undefined4 uStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float in_stack_00000060;
  undefined8 in_stack_00000068;
  float in_stack_00000070;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  undefined4 uStack000000000000008c;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 *in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xc50));
  FUN_02f08768(Method_OVRPermissionsRequester_GetPermissionId__);
  FUN_02f08768(Method_OVRPlatformMenu_RetreatOneLevel__);
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<ProbeVolumeDebugPass_WriteApvData>__
              );
  FUN_02f08768(
              Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<STP_PreTaaData>__
              );
  FUN_02f08768(PTR_DAT_067ce5d8);
  *(undefined1 *)(unaff_x21 + 0xbd9) = 1;
  memset(&stack0x000000d8,0,0x88);
  in_stack_000000c8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000b8 = (undefined8 *)0x0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000b0 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  uStack000000000000008c = 0;
  memmove(&stack0x000000d8,
          (void *)(*(long *)(unaff_x19 + 0x10) + (long)(unaff_w20 - *(int *)(unaff_x19 + 8)) * 0x88)
          ,0x88);
  FUN_0612c700(&stack0x00000048,&stack0x000000d8,0);
  fVar44 = fStack000000000000004c;
  fVar34 = fStack0000000000000050;
  fVar30 = (float)FUN_05be09fc(fStack0000000000000048,0);
  FUN_0612c700(&stack0x00000048,&stack0x000000d8,0);
  fStack0000000000000014 = fStack0000000000000058;
  fVar42 = fStack000000000000005c;
  fVar31 = (float)FUN_05be09fc(uStack0000000000000054,0);
  lVar16 = *unaff_x22;
  if (*(int *)(lVar16 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar16 = *unaff_x22;
  }
  if (**(long **)(lVar16 + 0xb8) != 0) {
    FUN_03da08b8(&stack0x000000c8,*(undefined4 *)(**(long **)(lVar16 + 0xb8) + 0x18),2,1,
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<ProbeVolumeDebugPass_WriteApvData>__
                );
    puVar5 = 
    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<STP_PreTaaData>__;
    puVar4 = Method_System_Runtime_Remoting_Messaging_RemotingSurrogate_GetObjectData__;
    puVar27 = (undefined8 *)Method_OVRPlatformMenu_RetreatOneLevel__;
    puVar28 = (undefined8 *)Method_OVRPermissionsRequester_GetPermissionId__;
    lVar16 = **(long **)(*unaff_x22 + 0xb8);
    if ((lVar16 != 0) && (lVar19 = (*(long **)(*unaff_x22 + 0xb8))[1], lVar19 != 0)) {
      FUN_03d9f7d0(&stack0x000000b8,*(int *)(lVar19 + 0x18) * 3 + *(int *)(lVar16 + 0x18),2,1,
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<STP_PreTaaData>__
                  );
      lVar16 = 0;
      uVar26 = 0;
      uVar25 = 0;
      uVar22 = 0;
      while( true ) {
        puVar3 = PTR_DAT_067ce5d8;
        lVar19 = *(long *)PTR_DAT_067ce5d8;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar19 = *(long *)puVar3;
        }
        if (**(long **)(lVar19 + 0xb8) == 0) goto LAB_05dbef08;
        if ((long)*(int *)(**(long **)(lVar19 + 0xb8) + 0x18) <= (long)uVar26) {
          uVar26 = 0;
          goto LAB_05dbea28;
        }
        FUN_04da8978(&stack0x00000048,unaff_x19 + 0x38,*(undefined4 *)(unaff_x19 + 0x110),
                     *(undefined8 *)puVar4);
        fVar10 = in_stack_00000080;
        uVar40 = in_stack_00000078;
        fVar9 = in_stack_00000070;
        uVar43 = in_stack_00000068;
        fVar8 = in_stack_00000060;
        fVar7 = fStack000000000000005c;
        fVar6 = fStack0000000000000058;
        fVar39 = fStack0000000000000050;
        fVar37 = fStack000000000000004c;
        fVar33 = fStack0000000000000048;
        puVar3 = PTR_DAT_067ce5d8;
        lVar19 = *(long *)PTR_DAT_067ce5d8;
        if (*(int *)(lVar19 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
          lVar19 = *(long *)puVar3;
        }
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_05dbef08;
        if (*(uint *)(lVar19 + 0x18) <= uVar26) break;
        lVar19 = lVar19 + lVar16;
        fVar32 = fVar30 + fVar31 * *(float *)(lVar19 + 0x20);
        fVar38 = fVar44 + fStack0000000000000014 * *(float *)(lVar19 + 0x24);
        fVar41 = fVar34 + fVar42 * *(float *)(lVar19 + 0x28);
        fVar33 = (float)uVar40 + fVar33 * fVar32 + fVar6 * fVar38 + (float)uVar43 * fVar41;
        fVar37 = (float)((ulong)uVar40 >> 0x20) +
                 fVar37 * fVar32 + fVar7 * fVar38 + (float)((ulong)uVar43 >> 0x20) * fVar41;
        uVar43 = CONCAT44(fVar37,fVar33);
        fVar39 = -(fVar10 + fVar39 * fVar32 + fVar8 * fVar38 + fVar9 * fVar41);
        *(undefined8 *)(in_stack_000000c8 + lVar16) = uVar43;
        *(float *)((undefined8 *)(in_stack_000000c8 + lVar16) + 1) = fVar39;
        uVar20 = uVar22;
        if (*(float *)(unaff_x19 + 0x100) <= fVar39) {
          if (*(char *)(unaff_x19 + 0x104) == '\0') {
            uVar43 = CONCAT44(fVar37 / fVar39,fVar33 / fVar39);
          }
          in_stack_000000b8[(int)uVar22] = uVar43;
          uVar20 = uVar22 + 1;
          if ((float)uVar43 <
              *(float *)((long)in_stack_000000b8 +
                        (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3))) {
            uVar25 = (ulong)uVar22;
          }
        }
        uVar22 = uVar20;
        uVar26 = uVar26 + 1;
        lVar16 = lVar16 + 0xc;
      }
LAB_05dbef0c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
  }
LAB_05dbef08:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
LAB_05dbea28:
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar19 = *(long *)PTR_DAT_067ce5d8;
  }
  lVar16 = *(long *)(*(long *)(lVar19 + 0xb8) + 8);
  if (lVar16 == 0) goto LAB_05dbef08;
  if ((long)*(int *)(lVar16 + 0x18) <= (long)uVar26) {
    FUN_03d9f7d0(&stack0x000000a8,uVar22,2,1,*(undefined8 *)puVar5);
    plVar24 = (long *)PTR_DAT_067ce5d8;
    if (0 < (int)uVar22) {
      uVar35 = 0;
      uVar23 = uVar25;
      do {
        uVar18 = uVar35;
        uVar35 = in_stack_000000b8[(int)(uint)uVar23];
        if (*(int *)(*plVar24 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        FUN_05dbef10(uVar35,uVar35 >> 0x20,0x3f800000);
        uVar21 = 0;
        uVar20 = 0;
        *(ulong *)(in_stack_000000a8 + uVar18 * 8) = uVar35;
        fVar44 = (float)(uVar35 >> 0x20);
        uVar43 = CONCAT44((float)((ulong)*in_stack_000000b8 >> 0x20) - fVar44,
                          (float)*in_stack_000000b8 - (float)uVar35);
        do {
          fVar34 = (float)in_stack_000000b8[uVar21] - (float)uVar35;
          fVar42 = (float)((ulong)in_stack_000000b8[uVar21] >> 0x20) - fVar44;
          if (uVar20 == (uint)uVar23) {
LAB_05dbec4c:
            uVar20 = (uint)uVar21;
            uVar43 = CONCAT44(fVar42,fVar34);
          }
          else {
            uVar40 = NEON_rev64(CONCAT44(fVar42,fVar34),4);
            fVar30 = (float)uVar43;
            fVar31 = (float)((ulong)uVar43 >> 0x20);
            fVar33 = fVar30 * (float)uVar40 - fVar31 * (float)((ulong)uVar40 >> 0x20);
            if ((0.0 < fVar33) ||
               ((fVar33 == 0.0 &&
                (uVar40 = NEON_ext(CONCAT44(fVar42 * fVar42,fVar34 * fVar34),
                                   CONCAT44(fVar31 * fVar31,fVar30 * fVar30),4,1),
                fVar31 * fVar31 + (float)((ulong)uVar40 >> 0x20) < fVar34 * fVar34 + (float)uVar40))
               )) goto LAB_05dbec4c;
          }
          uVar21 = uVar21 + 1;
        } while (uVar22 != uVar21);
      } while ((uVar20 != (uint)uVar25) &&
              (uVar23 = (ulong)uVar20, uVar35 = uVar18 + 1, uVar18 + 1 < (ulong)uVar22));
      FUN_05dbb234((undefined4 *)(unaff_x19 + 0x106),0,*(ushort *)(unaff_x19 + 0xfc) - 1);
      if (*(short *)(unaff_x19 + 0x106) < *(short *)(unaff_x19 + 0x108)) {
        iVar29 = *(short *)(unaff_x19 + 0x106) + 1;
        do {
          puVar4 = 
          Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
          ;
          uStack000000000000008c = 0x80007fff;
          fVar44 = (float)FUN_04da8450(unaff_x19 + 200,*(undefined4 *)(unaff_x19 + 0x110),
                                       *(undefined8 *)
                                        Method_UnityEngine_Rendering_RenderGraphModule_RenderGraph_AddComputePass<OcclusionCullingCommon_UpdateOccludersPassData>__
                                      );
          fVar34 = (float)FUN_04da8450(unaff_x19 + 0xd0,*(undefined4 *)(unaff_x19 + 0x110),
                                       *(undefined8 *)puVar4);
          lVar16 = 0;
          uVar25 = 0;
          fVar44 = fVar44 + (fVar34 - fVar44) * *(float *)(unaff_x19 + 0xc4) * (float)iVar29;
          do {
            lVar19 = 0;
            if (uVar18 != uVar25) {
              lVar19 = uVar25 + 1;
            }
            pfVar1 = (float *)(in_stack_000000a8 + lVar19 * 8);
            fVar34 = *(float *)(in_stack_000000a8 + lVar16 + 4);
            fVar34 = (fVar44 - fVar34) / (pfVar1[1] - fVar34);
            bVar11 = false;
            bVar12 = false;
            bVar13 = false;
            if (0.0 <= fVar34) {
              bVar11 = false;
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar34)) {
                bVar11 = fVar34 < 1.0;
                bVar12 = fVar34 == 1.0;
                bVar13 = false;
              }
            }
            if (bVar12 || bVar11 != bVar13) {
              fVar34 = *(float *)(in_stack_000000a8 + lVar16) +
                       fVar34 * (*pfVar1 - *(float *)(in_stack_000000a8 + lVar16));
              if (*(char *)(unaff_x19 + 0x104) == '\0') {
                if (*(int *)(*plVar24 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                fVar34 = (float)FUN_05dc0180(fVar34,fVar44,0x3f800000);
              }
              else {
                if (*(int *)(*plVar24 + 0xe4) == 0) {
                  thunk_FUN_02f6670c();
                }
                fVar34 = (float)FUN_05dc0fdc(fVar34,fVar44,0x3f800000);
              }
              fVar42 = (float)(*(int *)(unaff_x19 + 0xf8) + -1);
              bVar11 = false;
              bVar12 = false;
              bVar13 = false;
              if ((uint)ABS(fVar34) < 0x7f800001) {
                bVar11 = false;
                bVar12 = false;
                bVar13 = true;
                if (!NAN(fVar34) && !NAN(fVar42)) {
                  bVar11 = fVar34 < fVar42;
                  bVar12 = fVar34 == fVar42;
                  bVar13 = false;
                }
              }
              if (bVar12 || bVar11 != bVar13) {
                fVar42 = fVar34;
              }
              bVar11 = true;
              if (((uint)ABS(fVar42) < 0x7f800001) && (bVar11 = false, !NAN(fVar42))) {
                bVar11 = fVar42 < 0.0;
              }
              dVar36 = 0.0;
              if (!bVar11) {
                dVar36 = (double)fVar42;
              }
              iVar14 = 0;
              if (dVar36 != INFINITY) {
                iVar14 = (int)dVar36;
              }
              FUN_05dbb1a8(&stack0x0000008c,iVar14);
            }
            uVar25 = uVar25 + 1;
            lVar16 = lVar16 + 8;
          } while (uVar18 + 1 != uVar25);
          iVar2 = *(int *)(unaff_x19 + 0x10c);
          iVar14 = iVar29 + 1 + iVar2;
          uVar26 = uVar26 & 0xffffffff00000000 |
                   (ulong)*(uint *)(*(long *)(unaff_x19 + 0x20) + (long)iVar14 * 4);
          uVar15 = FUN_05dbb2f8(uVar26);
          *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)iVar14 * 4) = uVar15;
          plVar24 = (long *)PTR_DAT_067ce5d8;
          uVar15 = FUN_05dbb2f8();
          *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)(iVar2 + iVar29) * 4) = uVar15;
          bVar11 = iVar29 < *(short *)(unaff_x19 + 0x108);
          iVar29 = iVar29 + 1;
        } while (bVar11);
      }
      *(undefined4 *)(*(long *)(unaff_x19 + 0x20) + (long)*(int *)(unaff_x19 + 0x10c) * 4) =
           *(undefined4 *)(unaff_x19 + 0x106);
      puVar27 = (undefined8 *)Method_OVRPlatformMenu_RetreatOneLevel__;
      puVar28 = (undefined8 *)Method_OVRPermissionsRequester_GetPermissionId__;
    }
    FUN_03d9facc(&stack0x000000a8,*puVar28);
    FUN_03d9facc(&stack0x000000b8,*puVar28);
    FUN_03da0bdc(&stack0x000000c8,*puVar27);
    return;
  }
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar16 = *(long *)(*(long *)(*(long *)PTR_DAT_067ce5d8 + 0xb8) + 8);
    if (lVar16 == 0) goto LAB_05dbef08;
  }
  if (*(uint *)(lVar16 + 0x18) <= uVar26) goto LAB_05dbef0c;
  lVar16 = lVar16 + uVar26 * 0x10;
  iVar29 = 1;
  in_stack_00000098 = *(undefined8 *)(lVar16 + 0x28);
  in_stack_00000090 = *(undefined8 *)(lVar16 + 0x20);
  puVar17 = (undefined8 *)(in_stack_000000c8 + (long)(int)in_stack_00000090 * 0xc);
  uVar43 = *puVar17;
  fVar44 = *(float *)(puVar17 + 1);
  do {
    iVar14 = FUN_05c0cc0c(&stack0x00000090,iVar29,0);
    fVar34 = *(float *)(unaff_x19 + 0x100);
    puVar17 = (undefined8 *)(in_stack_000000c8 + (long)iVar14 * 0xc);
    uVar40 = *puVar17;
    fVar42 = *(float *)(puVar17 + 1);
    uVar20 = uVar22;
    if (fVar34 <= fVar44) {
      if (fVar42 < fVar34) goto LAB_05dbeaf4;
    }
    else if (fVar34 <= fVar42) {
LAB_05dbeaf4:
      fVar31 = (fVar34 - fVar44) / (fVar42 - fVar44);
      fVar34 = (float)uVar43;
      fVar30 = (float)((ulong)uVar43 >> 0x20);
      fVar34 = fVar34 + ((float)uVar40 - fVar34) * fVar31;
      fVar30 = fVar30 + ((float)((ulong)uVar40 >> 0x20) - fVar30) * fVar31;
      uVar40 = CONCAT44(fVar30,fVar34);
      if (*(char *)(unaff_x19 + 0x104) == '\0') {
        fVar42 = fVar44 + (fVar42 - fVar44) * fVar31;
        uVar40 = CONCAT44(fVar30 / fVar42,fVar34 / fVar42);
      }
      in_stack_000000b8[(int)uVar22] = uVar40;
      uVar20 = uVar22 + 1;
      if ((float)uVar40 <
          *(float *)((long)in_stack_000000b8 +
                    (-(uVar25 >> 0x1f) & 0xfffffff800000000 | uVar25 << 3))) {
        uVar25 = (ulong)uVar22;
      }
    }
    uVar22 = uVar20;
    iVar29 = iVar29 + 1;
  } while (iVar29 != 4);
  uVar26 = uVar26 + 1;
  lVar19 = *(long *)PTR_DAT_067ce5d8;
  goto LAB_05dbea28;
}


