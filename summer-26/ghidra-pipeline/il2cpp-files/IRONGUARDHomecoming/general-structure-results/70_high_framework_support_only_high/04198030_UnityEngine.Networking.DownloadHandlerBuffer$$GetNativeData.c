/*
FUNCTION_NAME: UnityEngine.Networking.DownloadHandlerBuffer$$GetNativeData
ENTRY_POINT: 04198030
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04198260) */
/* WARNING: Removing unreachable block (ram,0x04198438) */
/* WARNING: Removing unreachable block (ram,0x04198394) */
/* WARNING: Removing unreachable block (ram,0x041983c8) */
/* WARNING: Removing unreachable block (ram,0x041983e4) */
/* WARNING: Removing unreachable block (ram,0x04198448) */

void UnityEngine_Networking_DownloadHandlerBuffer__GetNativeData(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long in_stack_00000000;
  ulong in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000058;
  
code_r0x04198030:
  do {
    lVar8 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x23) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0419807c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_0419807c:
    uVar10 = (*(code *)*puVar5)();
    if ((uVar10 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_04198254;
      lVar8 = *unaff_x20;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0419822c;
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x20;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x24) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_041980d8;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_041980d8:
    lVar8 = (*(code *)*puVar5)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(int *)(lVar8 + 0x10) == -1) {
      uVar10 = FUN_0340eec4(*(undefined8 *)(lVar8 + 0x18),0);
      if ((uVar10 & 1) == 0) {
        if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar6 = FUN_041acf38(*(long *)(unaff_x19 + 0x420),*(undefined8 *)(lVar8 + 0x18),0);
        goto LAB_04198130;
      }
    }
    else {
      if (*(long *)(unaff_x19 + 0x420) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = FUN_041a8808(*(long *)(unaff_x19 + 0x420),*(int *)(lVar8 + 0x10),0);
LAB_04198130:
      if ((lVar6 != 0) && (*(char *)(lVar6 + 0x61) != '\0')) {
        *(long *)(lVar8 + 0x28) = lVar6;
        thunk_FUN_01f51358((long *)(lVar8 + 0x28),lVar6);
        lVar6 = in_stack_00000058;
        uVar2 = *(uint *)(lVar8 + 0x20);
        thunk_FUN_01f51358();
        in_stack_00000008 = (ulong)uVar2;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar9 = *(long *)(lVar6 + 0x10);
        lVar11 = *unaff_x25;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        in_stack_00000000 = lVar8;
        if (uVar2 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          plVar7 = (long *)(lVar9 + 0x20);
          *plVar7 = lVar8;
          *(ulong *)(lVar9 + 0x28) = in_stack_00000008;
          thunk_FUN_01f51358(plVar7,0);
        }
        else {
          FUN_031ebd28(lVar6,lVar8,in_stack_00000008,
                       *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
        }
        goto code_r0x04198030;
      }
    }
    *(undefined8 *)(lVar8 + 0x28) = 0;
    thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar12 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04198248;
    }
  }
LAB_0419822c:
  puVar5 = (undefined8 *)FUN_01ecb238();
LAB_04198248:
  (*(code *)*puVar5)();
LAB_04198254:
  uVar10 = FUN_02303f10(*(undefined8 *)(unaff_x19 + 0x3e0),in_stack_00000058,
                        *(undefined8 *)PTR_DAT_0458deb0);
  if ((uVar10 & 1) == 0) {
    lVar8 = *(long *)(unaff_x19 + 0x3d0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    iVar1 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_0358d1e4(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
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
    while (uVar10 = FUN_02cbaf58(&stack0x00000020,*(undefined8 *)puVar3), (uVar10 & 1) != 0) {
      lVar8 = *(long *)(unaff_x19 + 0x3d0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(lVar8 + 0x10);
      lVar9 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar2 = *(uint *)(lVar8 + 0x18);
      if (uVar2 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar2 + 1;
        puVar5 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
        *puVar5 = in_stack_00000030;
        thunk_FUN_01f51358(puVar5);
      }
      else {
        FUN_030f2bb4(lVar8,in_stack_00000030,
                     *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
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


