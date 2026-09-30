/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandler$$CreateNativeArrayForNativeData
ENTRY_POINT: 04197efc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04198394) */
/* WARNING: Removing unreachable block (ram,0x04198260) */
/* WARNING: Removing unreachable block (ram,0x041983c8) */
/* WARNING: Removing unreachable block (ram,0x041983e4) */
/* WARNING: Removing unreachable block (ram,0x04198448) */
/* WARNING: Removing unreachable block (ram,0x04198438) */

void UnityEngine_Networking_DownloadHandler__CreateNativeArrayForNativeData(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long unaff_x19;
  long unaff_x20;
  long in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long in_stack_00000058;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(PTR_DAT_0458dea8);
  thunk_FUN_01efb3a4(PTR_DAT_0458deb0);
  thunk_FUN_01efb3a4(PTR_DAT_0458deb8);
  thunk_FUN_01efb3a4(PTR_DAT_0458dec0);
  thunk_FUN_01efb3a4(PTR_DAT_0458dec8);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  thunk_FUN_01efb3a4(PTR_DAT_0458ded0);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
  thunk_FUN_01efb3a4(PTR_DAT_0458ded8);
  thunk_FUN_01efb3a4(PTR_DAT_0458dee0);
  thunk_FUN_01efb3a4(PTR_DAT_0458dee8);
  thunk_FUN_01efb3a4(PTR_DAT_0458def0);
  thunk_FUN_01efb3a4(PTR_DAT_0458def8);
  thunk_FUN_01efb3a4(PTR_DAT_0458df00);
  *(undefined1 *)(unaff_x20 + 0xc96) = 1;
  in_stack_00000058 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(char *)(unaff_x19 + 1000) != '\0') {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0458dea8 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  _in_stack_00000040 = FUN_029ec56c(&stack0x00000058,*(undefined8 *)PTR_DAT_0458dea0);
  if (*(char *)(unaff_x19 + 0x3c8) != '\0') {
    if (*(long *)(unaff_x19 + 0x3d8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar6 = (long *)FUN_041b1698(*(long *)(unaff_x19 + 0x3d8),0);
    puVar5 = PTR_DAT_0458dee0;
    puVar4 = PTR_DAT_0458ded0;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_0419807c;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar3,0);
LAB_0419807c:
      uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        if (plVar6 == (long *)0x0) break;
        lVar10 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 == 0) goto LAB_0419822c;
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        goto LAB_04198214;
      }
      lVar10 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_041980d8;
          }
          uVar12 = uVar12 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238(plVar6,*(long *)puVar4,0);
LAB_041980d8:
      lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      if (*(int *)(lVar10 + 0x10) == -1) {
        uVar12 = FUN_0340eec4(*(undefined8 *)(lVar10 + 0x18),0);
        if ((uVar12 & 1) == 0) {
          if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar8 = FUN_041acf38(*(long *)(unaff_x19 + 0x420),*(undefined8 *)(lVar10 + 0x18),0);
          goto LAB_04198130;
        }
LAB_041981bc:
        *(undefined8 *)(lVar10 + 0x28) = 0;
        thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),0);
      }
      else {
        if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = FUN_041a8808(*(long *)(unaff_x19 + 0x420),*(int *)(lVar10 + 0x10),0);
LAB_04198130:
        if ((lVar8 == 0) || (*(char *)(lVar8 + 0x61) == '\0')) goto LAB_041981bc;
        *(long *)(lVar10 + 0x28) = lVar8;
        thunk_FUN_01f51358((long *)(lVar10 + 0x28),lVar8);
        lVar8 = in_stack_00000058;
        uVar2 = *(uint *)(lVar10 + 0x20);
        thunk_FUN_01f51358();
        in_stack_00000008 = (ulong)uVar2;
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)puVar5;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar8 + 0x18);
        in_stack_00000000 = lVar10;
        if (uVar2 < *(uint *)(lVar11 + 0x18)) {
          lVar11 = lVar11 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar8 + 0x18) = uVar2 + 1;
          plVar9 = (long *)(lVar11 + 0x20);
          *plVar9 = lVar10;
          *(ulong *)(lVar11 + 0x28) = in_stack_00000008;
          thunk_FUN_01f51358(plVar9,0);
        }
        else {
          FUN_031ebd28(lVar8,lVar10,in_stack_00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_04198264;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_04198214:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04198248;
    }
  }
LAB_0419822c:
  puVar7 = (undefined8 *)
           FUN_01ecb238(plVar6,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_04198248:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_04198264:
  uVar12 = FUN_02303f10(*(undefined8 *)(unaff_x19 + 0x3e0),in_stack_00000058,
                        *(undefined8 *)PTR_DAT_0458deb0);
  if ((uVar12 & 1) == 0) {
    lVar10 = *(long *)(unaff_x19 + 0x3d0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar10 + 0x18);
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
    }
    if (in_stack_00000058 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_031ec79c(in_stack_00000058,*(undefined8 *)PTR_DAT_0458def0);
    puVar4 = PTR_DAT_0458ded8;
    puVar3 = PTR_DAT_0458dec0;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while( true ) {
      uVar12 = FUN_02cbaf58(&stack0x00000020,*(undefined8 *)puVar3);
      if ((uVar12 & 1) == 0) break;
      lVar10 = *(long *)(unaff_x19 + 0x3d0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar10 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar10 + 0x18) = uVar2 + 1;
        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        *puVar7 = in_stack_00000030;
        thunk_FUN_01f51358(puVar7);
      }
      else {
        FUN_030f2bb4(lVar10,in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_02cbaf54(&stack0x00000020,*(undefined8 *)PTR_DAT_0458deb8);
    FUN_0241b8dc(*(undefined8 *)(unaff_x19 + 0x3e0),in_stack_00000058,
                 *(undefined8 *)PTR_DAT_0458df00);
    FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
    FUN_04199edc();
    FUN_04199f14();
  }
  else {
    FUN_025ecf24(&stack0x00000040,*(undefined8 *)PTR_DAT_0458def8);
  }
  return;
}


