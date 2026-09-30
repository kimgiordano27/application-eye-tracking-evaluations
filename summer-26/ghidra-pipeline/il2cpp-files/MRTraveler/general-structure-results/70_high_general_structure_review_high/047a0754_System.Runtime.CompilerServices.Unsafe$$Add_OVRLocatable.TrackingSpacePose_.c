/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$Add<OVRLocatable.TrackingSpacePose>
ENTRY_POINT: 047a0754
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x047a0aa0) */

void System_Runtime_CompilerServices_Unsafe__Add<OVRLocatable_TrackingSpacePose>
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  uint unaff_w19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  void *unaff_x24;
  long *unaff_x25;
  long unaff_x29;
  
  FUN_03cf1244(param_2);
  lVar2 = thunk_FUN_03cf5138();
  if (lVar2 == 0) {
    plVar4 = (long *)thunk_FUN_03cf5138();
    if (plVar4 == (long *)0x0) {
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar7 = thunk_FUN_03cf5234();
      uVar6 = thunk_FUN_03ce5214(PTR_DAT_08e81db8);
      FUN_07064ba8(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar7);
    }
    lVar2 = *(long *)(unaff_x20 + 0x38);
    *(long *)(unaff_x29 + -0x18) = unaff_x20;
    lVar2 = *(long *)(lVar2 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03cf1244(lVar2);
    }
    lVar8 = *unaff_x25;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_047a08c0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03cf1348();
LAB_047a08c0:
    plVar5 = (long *)(*(code *)*puVar3)();
    puVar1 = PTR_DAT_08e6a290;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    do {
      lVar2 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            lVar8 = *(long *)(unaff_x29 + -0x18);
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_047a0930;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = *(long *)(unaff_x29 + -0x18);
      puVar3 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)puVar1,0);
LAB_047a0930:
      uVar10 = (*(code *)*puVar3)(plVar5,puVar3[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0)
        goto 
        System_Runtime_CompilerServices_Unsafe__Add<ResourceManager_DeferredCallbackRegisterRequest>
        ;
        lVar2 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar10 == 0) goto System_Runtime_CompilerServices_Unsafe__AddByteOffset<char>;
        piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        goto LAB_047a0a5c;
      }
      lVar2 = *(long *)(*(long *)(lVar8 + 0x38) + 0x30);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03cf1244(lVar2);
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar2) {
            lVar2 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto System_Runtime_CompilerServices_Unsafe__Add<VisualEffectControlClip_ClipEvent>;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar2 = FUN_03cf1348(plVar5,lVar2,0);
System_Runtime_CompilerServices_Unsafe__Add<VisualEffectControlClip_ClipEvent>:
      *(void **)(unaff_x29 + -0x10) = unaff_x22;
      lVar2 = *(long *)(lVar2 + 8);
      (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 8),lVar2,plVar5,unaff_x29 + -0x10);
      memcpy(unaff_x24,unaff_x22,unaff_x21);
      memcpy(unaff_x23,unaff_x24,unaff_x21);
      lVar2 = thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x40));
      if ((lVar2 != 0) &&
         (lVar8 = thunk_FUN_03cf5138(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar8 == 0)) {
        uVar6 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
        FUN_03c8f9fc(uVar6,0);
      }
      if (*(uint *)(plVar4 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb38();
      }
      lVar8 = (long)(int)unaff_w19;
      plVar4[lVar8 + 4] = lVar2;
      unaff_w19 = unaff_w19 + 1;
      thunk_FUN_03d233cc(plVar4 + lVar8 + 4,lVar2);
    } while( true );
  }
  lVar2 = **(long **)(unaff_x20 + 0x38);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03cf1244(lVar2);
  }
  lVar8 = *unaff_x25;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar8 + (long)(*piVar11 + 5) * 0x10 + 0x138);
        goto LAB_047a086c;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar3 = (undefined8 *)FUN_03cf1348();
LAB_047a086c:
  (*(code *)*puVar3)();
System_Runtime_CompilerServices_Unsafe__Add<ResourceManager_DeferredCallbackRegisterRequest>:
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_047a0a5c:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_08e6a288) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_047a0a90;
    }
  }
System_Runtime_CompilerServices_Unsafe__AddByteOffset<char>:
  puVar3 = (undefined8 *)FUN_03cf1348(plVar5,*(long *)PTR_DAT_08e6a288,0);
LAB_047a0a90:
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  goto System_Runtime_CompilerServices_Unsafe__Add<ResourceManager_DeferredCallbackRegisterRequest>;
}


