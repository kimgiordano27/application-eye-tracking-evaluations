/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_SetPlatformCameraMode
ENTRY_POINT: 05692ae0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRPlugin_OVRP_1_57_0__ovrp_Media_SetPlatformCameraMode(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x19;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 uStack00000000000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  
  uStack00000000000000e0 = 0;
  uStack00000000000000c8 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0550afb4(*(undefined8 *)(param_1 + 0x10),0,iVar1,0);
    }
    lVar12 = *(long *)(unaff_x19 + 0x130);
    if (lVar12 != 0) {
      lVar8 = *(long *)PTR_DAT_069fb990;
      *(undefined4 *)(lVar12 + 0x18) = 0;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar15 = *(undefined8 *)(unaff_x19 + 0x20);
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_0634eb94(uVar15,0,0);
      puVar5 = OVRTask<OVRResult<object,_Int32Enum>>_TypeInfo;
      puVar4 = OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TypeInfo;
      puVar3 = PTR_DAT_06a0b9f0;
      if ((((uVar9 & 1) != 0) && (lVar12 = *(long *)(unaff_x19 + 0x118), lVar12 != 0)) &&
         (0 < *(int *)(lVar12 + 0x18))) {
        uVar9 = 0;
        do {
          lVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar5);
          FUN_0552aca4(lVar8,0);
          if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_0569310c;
          if (lVar8 == 0) goto LAB_05693108;
          puVar16 = (undefined8 *)(lVar8 + 0x10);
          *puVar16 = *(undefined8 *)(lVar12 + 0x20 + uVar9 * 8);
          LeanTween__value(puVar16);
          if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05693108;
          uStack00000000000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
          FUN_0638bff4(&stack0x00000090,&stack0x000000c8,*puVar16,0);
          in_stack_000000d8 = in_stack_00000098;
          in_stack_000000d0 = in_stack_00000090;
          uStack00000000000000e0 = in_stack_000000a0;
          uVar10 = FUN_0638b88c(&stack0x000000d0,0);
          if ((uVar10 & 1) != 0) {
            lVar11 = *(long *)(unaff_x19 + 0x128);
            if (lVar11 == 0) goto LAB_05693108;
            lVar13 = *(long *)(lVar11 + 0x10);
            lVar14 = *(long *)
                      OVRTask<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRAnchor_FetchResult>>_TypeInfo
            ;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar13 == 0) goto LAB_05693108;
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar13 + 0x18)) {
              lVar13 = lVar13 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar13 + 0x30) = uStack00000000000000e0;
              *(undefined8 *)(lVar13 + 0x28) = in_stack_000000d8;
              *(undefined8 *)(lVar13 + 0x20) = in_stack_000000d0;
              LeanTween__value(lVar13 + 0x28,0);
            }
            else {
              in_stack_00000098 = in_stack_000000d8;
              in_stack_00000090 = in_stack_000000d0;
              in_stack_000000a0 = uStack00000000000000e0;
              FUN_03fd1e18(lVar11,&stack0x00000090,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            lVar11 = *(long *)(unaff_x19 + 0x130);
            uVar17 = *(undefined8 *)(unaff_x19 + 0x120);
            uVar15 = thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_06a0e778);
            FUN_04462620(uVar15,lVar8,
                         *(undefined8 *)
                          OVRTask<OVRResult<Guid,_OVRColocationSession_Result>>_TypeInfo,0);
            bVar6 = FUN_0375e048(uVar17,uVar15,*(undefined8 *)puVar4);
            if (lVar11 == 0) goto LAB_05693108;
            lVar8 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)puVar3;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_05693108;
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
              *(byte *)(lVar8 + (int)uVar2 + 0x20) = bVar6 & 1;
            }
            else {
              FUN_03f35398(lVar11,bVar6 & 1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)(lVar12 + 0x18));
      }
      lVar12 = *(long *)(unaff_x19 + 0x140);
      if (lVar12 != 0) {
        *(undefined4 *)(lVar12 + 0x18) = 0;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        puVar3 = PTR_DAT_069fc3e0;
        lVar12 = *(long *)(unaff_x19 + 0x138);
        if ((lVar12 != 0) && (0 < (int)*(ulong *)(lVar12 + 0x18))) {
          uVar9 = 0;
          uVar10 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar9) {
LAB_0569310c:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar8 = *(long *)(unaff_x19 + 0x140);
            uVar7 = FUN_0631e59c(*(undefined8 *)(lVar12 + 0x20 + uVar9 * 8),0);
            if (lVar8 == 0) goto LAB_05693108;
            lVar11 = *(long *)(lVar8 + 0x10);
            lVar13 = *(long *)puVar3;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_05693108;
            uVar2 = *(uint *)(lVar8 + 0x18);
            if (uVar2 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar2 + 1;
              *(undefined4 *)(lVar11 + (long)(int)uVar2 * 4 + 0x20) = uVar7;
            }
            else {
              FUN_03fb3e1c(lVar8,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            uVar10 = (ulong)*(uint *)(lVar12 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((long)uVar9 < (long)(int)*(uint *)(lVar12 + 0x18));
        }
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x28),0);
        *(undefined4 *)(unaff_x19 + 0x30) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x38),0);
        *(undefined4 *)(unaff_x19 + 0x40) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x48),0);
        *(undefined4 *)(unaff_x19 + 0x50) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x58),0);
        *(undefined4 *)(unaff_x19 + 0x60) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x68),0);
        *(undefined4 *)(unaff_x19 + 0x70) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x78),0);
        *(undefined4 *)(unaff_x19 + 0x80) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x88),0);
        *(undefined4 *)(unaff_x19 + 0x90) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x98),0);
        *(undefined4 *)(unaff_x19 + 0xa0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xa8),0);
        *(undefined4 *)(unaff_x19 + 0xb0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xb8),0);
        *(undefined4 *)(unaff_x19 + 0xc0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 200),0);
        *(undefined4 *)(unaff_x19 + 0xd0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xd8),0);
        *(undefined4 *)(unaff_x19 + 0xe0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0xe8),0);
        *(undefined4 *)(unaff_x19 + 0xf0) = uVar7;
        uVar7 = FUN_0631e59c(*(undefined8 *)(unaff_x19 + 0x100),0);
        puVar3 = PTR_DAT_069fb990;
        *(undefined4 *)(unaff_x19 + 0x108) = uVar7;
        uVar15 = *(undefined8 *)(unaff_x19 + 0x20);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_0634eb94(uVar15,0,0);
        if ((uVar9 & 1) == 0) {
          return;
        }
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          uStack00000000000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
          FUN_0638bff4(&stack0x000000b0,&stack0x000000c8,
                       *(undefined8 *)System_Collections_Generic_List<IEventBinding>_TypeInfo,0);
          puVar3 = OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo;
          in_stack_00000058 = in_stack_000000b8;
          in_stack_00000050 = in_stack_000000b0;
          in_stack_00000060 = in_stack_000000c0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          FUN_043316c8(&stack0x00000090,&stack0x00000050,
                       *(undefined8 *)OVRTask<OVRResult<Guid,_Int32Enum>>_TypeInfo);
          *(undefined8 *)(unaff_x19 + 0x158) = in_stack_00000098;
          *(undefined8 *)(unaff_x19 + 0x150) = in_stack_00000090;
          *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000000a8;
          *(undefined8 *)(unaff_x19 + 0x160) = in_stack_000000a0;
          LeanTween__value(unaff_x19 + 0x160,0);
          uVar7 = FUN_0631e59c(*(undefined8 *)
                                System_Collections_Generic_List<IGroupBoxOption>_TypeInfo,0);
          *(undefined4 *)(unaff_x19 + 0x170) = uVar7;
          if (*(long *)(unaff_x19 + 0x20) != 0) {
            uStack00000000000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
            FUN_0638bff4(&stack0x00000078,&stack0x000000c8,
                         *(undefined8 *)System_Collections_Generic_List<IPAddress>_TypeInfo,0);
            in_stack_00000018 = in_stack_00000080;
            in_stack_00000010 = in_stack_00000078;
            in_stack_00000020 = in_stack_00000088;
            in_stack_00000058 = 0;
            in_stack_00000050 = 0;
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            FUN_043316c8(&stack0x00000050,&stack0x00000010,*(undefined8 *)puVar3);
            *(undefined8 *)(unaff_x19 + 0x180) = in_stack_00000058;
            *(undefined8 *)(unaff_x19 + 0x178) = in_stack_00000050;
            *(undefined8 *)(unaff_x19 + 400) = in_stack_00000068;
            *(undefined8 *)(unaff_x19 + 0x188) = in_stack_00000060;
            LeanTween__value(unaff_x19 + 0x188,0);
            uVar7 = FUN_0631e59c(*(undefined8 *)System_Collections_Generic_List<IPanel>_TypeInfo,0);
            *(undefined4 *)(unaff_x19 + 0x198) = uVar7;
            if (*(long *)(unaff_x19 + 0x20) != 0) {
              uStack00000000000000c8 = FUN_0631dfdc(*(long *)(unaff_x19 + 0x20),0);
              FUN_0638bff4(&stack0x00000038,&stack0x000000c8,
                           *(undefined8 *)System_Collections_Generic_List<IOvrGpuSkinner>_TypeInfo,0
                          );
              in_stack_000000f8 = in_stack_00000040;
              in_stack_000000f0 = in_stack_00000038;
              in_stack_00000100 = in_stack_00000048;
              in_stack_00000018 = 0;
              in_stack_00000010 = 0;
              in_stack_00000028 = 0;
              in_stack_00000020 = 0;
              FUN_043316c8(&stack0x00000010,&stack0x000000f0,*(undefined8 *)puVar3);
              *(undefined8 *)(unaff_x19 + 0x1a8) = in_stack_00000018;
              *(undefined8 *)(unaff_x19 + 0x1a0) = in_stack_00000010;
              *(undefined8 *)(unaff_x19 + 0x1b8) = in_stack_00000028;
              *(undefined8 *)(unaff_x19 + 0x1b0) = in_stack_00000020;
              LeanTween__value(unaff_x19 + 0x1b0,0);
              uVar7 = FUN_0631e59c(*(undefined8 *)OVRTask<OVRResult<ulong,_Int32Enum>>_TypeInfo,0);
              *(undefined4 *)(unaff_x19 + 0x1c0) = uVar7;
              return;
            }
          }
        }
      }
    }
  }
LAB_05693108:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


