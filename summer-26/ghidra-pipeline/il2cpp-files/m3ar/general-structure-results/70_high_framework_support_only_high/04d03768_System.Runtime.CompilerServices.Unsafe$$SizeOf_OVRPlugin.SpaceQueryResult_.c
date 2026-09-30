/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$SizeOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 04d03768
PROGRAM: m3ar-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d039dc) */

void System_Runtime_CompilerServices_Unsafe__SizeOf<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  int iVar6;
  int unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  void *unaff_x26;
  void *unaff_x27;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x29;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04d037ac;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0406ae20(unaff_x22,param_3,0);
LAB_04d037ac:
    uVar4 = (*(code *)*puVar1)(unaff_x22,puVar1[1]);
    if ((uVar4 & 1) == 0) {
      plVar7 = (long *)**(undefined8 **)(unaff_x29 + -0x20);
      if (plVar7 == (long *)0x0) goto LAB_04d039c8;
      lVar2 = *plVar7;
      uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar4 == 0) goto LAB_04d039a0;
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      goto Unity_Burst_Unsafe__AsRef<IntPtr>;
    }
    plVar7 = *(long **)(unaff_x29 + -0x18);
    if (plVar7 == (long *)0x0) {
      if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_04d03b70;
    }
    lVar2 = *(long *)(*(long *)(unaff_x21 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0406aaec(lVar2);
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_04d0382c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_0406ae20(plVar7,lVar2,0);
LAB_04d0382c:
    lVar2 = *(long *)(lVar2 + 8);
    *(void **)(unaff_x29 + -0x10) = unaff_x25;
    (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar7,unaff_x29 + -0x10);
    memcpy(unaff_x27,unaff_x25,unaff_x23);
    memcpy(unaff_x26,unaff_x25,unaff_x23);
    uVar4 = FUN_0403183c(*(undefined8 *)(*(long *)(unaff_x21 + 0x38) + 0x20));
    if ((uVar4 & 1) == 0) {
LAB_04d038c4:
      unaff_x22 = *(long **)(unaff_x29 + -0x18);
    }
    else {
      lVar3 = *(long *)(unaff_x21 + 0x38);
      lVar2 = *(long *)(lVar3 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0406aaec();
        lVar3 = *(long *)(unaff_x21 + 0x38);
      }
      FUN_04032260(lVar2,*(undefined8 *)(lVar3 + 0x28));
      uVar8 = *(undefined8 *)(unaff_x29 + -0x10);
      uVar4 = FUN_07368ba4(uVar8,0);
      if ((uVar4 & 1) != 0) goto LAB_04d038c4;
      iVar6 = 1;
      uVar9 = uVar8;
      if (unaff_w20 != 0) {
        if (unaff_w20 == 1) {
          lVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f657b8);
          uVar4 = FUN_073776a4(lVar2,0);
          if (lVar2 == 0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            goto LAB_04d03b70;
          }
          FUN_073712a0(lVar2,*(undefined8 *)(unaff_x29 + -0x30),0);
          iVar6 = 2;
        }
        else {
          iVar6 = unaff_w20 + 1;
          if (*(long *)(unaff_x29 + -0x40) == 0) {
            if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
              FUN_0403188c();
            }
            goto LAB_04d03b70;
          }
          lVar2 = *(long *)(unaff_x29 + -0x40);
        }
        *(long *)(unaff_x29 + -0x40) = lVar2;
        FUN_073712a0(lVar2,*(undefined8 *)(unaff_x29 + -0x48),0);
        uVar9 = *(undefined8 *)(unaff_x29 + -0x30);
        uVar4 = FUN_073712a0(lVar2,uVar8,0);
      }
      unaff_x22 = *(long **)(unaff_x29 + -0x18);
      *(undefined8 *)(unaff_x29 + -0x30) = uVar9;
      unaff_w20 = iVar6;
    }
    if (unaff_x22 == (long *)0x0) break;
    param_1 = *unaff_x22;
    param_3 = *unaff_x19;
  } while( true );
  if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_04d03b70;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
Unity_Burst_Unsafe__AsRef<IntPtr>:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08f65868) {
      puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_04d039bc;
    }
  }
LAB_04d039a0:
  puVar1 = (undefined8 *)FUN_0406ae20(plVar7,*(long *)PTR_DAT_08f65868,0);
LAB_04d039bc:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_04d039c8:
  uVar4 = *(ulong *)(unaff_x29 + -0x28);
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(unaff_x29 + -0x30);
    if (unaff_w20 == 0) {
      uVar4 = 0;
    }
    else if (unaff_w20 != 1) {
      plVar7 = *(long **)(unaff_x29 + -0x40);
      if (plVar7 == (long *)0x0) {
        uVar4 = 0;
        if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_0403188c();
        }
        goto LAB_04d03b70;
      }
      uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    }
    if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
  else if (*(long *)(*(long *)(unaff_x29 + -0x38) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_04031884();
  }
LAB_04d03b70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


