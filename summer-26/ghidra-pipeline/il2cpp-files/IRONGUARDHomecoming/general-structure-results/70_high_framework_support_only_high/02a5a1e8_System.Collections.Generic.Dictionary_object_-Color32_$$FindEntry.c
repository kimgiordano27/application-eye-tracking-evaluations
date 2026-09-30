/*
FUNCTION_NAME: System.Collections.Generic.Dictionary<object,-Color32>$$FindEntry
ENTRY_POINT: 02a5a1e8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02a5a580) */
/* WARNING: Removing unreachable block (ram,0x02a5a604) */

void System_Collections_Generic_Dictionary<object,_Color32>__FindEntry(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar13;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  void *unaff_x26;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
code_r0x02a5a1e8:
  puVar4 = (undefined8 *)FUN_01ecb238();
  do {
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) goto LAB_02a5a574;
      lVar8 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 == 0) goto LAB_02a5a54c;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
    }
    lVar10 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          lVar8 = lVar10 + (long)*piVar11 * 0x10 + 0x138;
          goto LAB_02a5a27c;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_01ecb238();
LAB_02a5a27c:
    *(void **)(unaff_x29 + -0x48) = unaff_x26;
    (**(code **)(*(long *)(lVar8 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar8 + 8) + 8));
    memcpy(unaff_x28,unaff_x26,*(size_t *)(unaff_x29 + -0x50));
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
    uVar6 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x48) = unaff_x23;
    (*(code *)puVar4[2])(uVar6);
    uVar5 = FUN_01f089f8(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x60));
    if ((uVar5 & 1) == 0) {
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ecaf44();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x68))();
    }
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
    uVar6 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x48) = unaff_x23;
    (*(code *)puVar4[2])(uVar6);
    plVar13 = *(long **)(unaff_x19 + 0x18);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x50);
    uVar6 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x48) = unaff_x27;
    (*(code *)puVar4[2])(uVar6);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ecaf44(lVar8);
      lVar10 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    }
    puVar4 = unaff_x27;
    if (-1 < *(int *)(*(long *)(lVar10 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x27;
    }
    lVar10 = *plVar13;
    uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar5 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          lVar8 = lVar10 + (long)(*piVar11 + 1) * 0x10 + 0x138;
          goto LAB_02a5a400;
        }
        uVar5 = uVar5 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar5 != 0);
    }
    lVar8 = FUN_01ecb238(plVar13,lVar8,1);
LAB_02a5a400:
    *(undefined8 **)(unaff_x29 + -0x48) = puVar4;
    lVar8 = *(long *)(lVar8 + 8);
    (**(code **)(lVar8 + 0x10))
              (*(undefined8 *)(lVar8 + 8),lVar8,plVar13,unaff_x29 + -0x48,unaff_x29 + -0xc);
    uVar2 = *(undefined4 *)(unaff_x29 + -0xc);
    puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x80);
    uVar6 = *puVar4;
    *(undefined8 **)(unaff_x29 + -0x48) = unaff_x25;
    (*(code *)puVar4[2])(uVar6);
    lVar8 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
    puVar4 = unaff_x23;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x60) + 0x28)) {
      puVar4 = (undefined8 *)*unaff_x23;
    }
    puVar12 = unaff_x25;
    if (-1 < *(int *)(*(long *)(lVar8 + 0x88) + 0x28)) {
      puVar12 = (undefined8 *)*unaff_x25;
    }
    puVar9 = *(undefined8 **)(lVar8 + 0x90);
    uVar6 = *puVar9;
    *(undefined8 **)(unaff_x29 + -0x48) = puVar4;
    *(long *)(unaff_x29 + -0x40) = unaff_x29 + -0xc;
    *(undefined8 **)(unaff_x29 + -0x38) = puVar12;
    *(long *)(unaff_x29 + -0x30) = unaff_x29 + -0x10;
    *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0x14;
    *(undefined4 *)(unaff_x29 + -0xc) = uVar2;
    *(undefined1 *)(unaff_x29 + -0x10) = 0;
    *(undefined1 *)(unaff_x29 + -0x14) = 0;
    *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x58);
    (*(code *)puVar9[2])(uVar6);
    if (*(char *)(unaff_x29 + -0x18) == '\0') {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar6 = thunk_FUN_01f117cc();
      uVar7 = thunk_FUN_01efb3a4(
                                Method_System_Linq_Enumerable_Select<int,_AnimatorTextureBaker_VertInfo>__
                                );
      FUN_034f6754(uVar6,uVar7,0);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar6);
    }
    lVar8 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 == 0) goto code_r0x02a5a1e8;
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    while (*(long *)(piVar11 + -2) !=
           *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__) {
      uVar5 = uVar5 - 1;
      piVar11 = piVar11 + 4;
      if (uVar5 == 0) goto code_r0x02a5a1e8;
    }
    puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar11 = piVar11 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar11 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_02a5a568;
    }
  }
LAB_02a5a54c:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_02a5a568:
  (*(code *)*puVar4)();
LAB_02a5a574:
  if (*(int *)(unaff_x19 + 0x24) != 0) {
LAB_02a5a5c4:
    if (*(long *)(*(long *)(unaff_x29 + -0x68) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  lVar8 = *(long *)(unaff_x19 + 0x10);
  thunk_FUN_01f3e6f0();
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)) {
    lVar10 = *(long *)(unaff_x19 + 0x10);
    thunk_FUN_01f3e6f0();
    if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x18), lVar10 != 0)) {
      iVar1 = *(int *)(lVar10 + 0x18);
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(lVar8 + 0x18) / iVar1;
      }
      *(int *)(unaff_x19 + 0x24) = iVar3;
      goto LAB_02a5a5c4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


