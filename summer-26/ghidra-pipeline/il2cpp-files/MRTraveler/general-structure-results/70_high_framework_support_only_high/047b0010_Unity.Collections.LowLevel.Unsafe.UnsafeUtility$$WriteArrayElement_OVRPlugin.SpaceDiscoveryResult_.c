/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$WriteArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 047b0010
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x047b0658) */
/* WARNING: Removing unreachable block (ram,0x047b06cc) */
/* WARNING: Removing unreachable block (ram,0x047b07b4) */
/* WARNING: Removing unreachable block (ram,0x047b07a0) */

undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_SpaceDiscoveryResult>
          (long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  int *piVar16;
  undefined8 uVar17;
  long unaff_x29;
  
  lVar3 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -8) = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(unaff_x29 + -0x18) = param_2;
  plVar15 = *(long **)(param_4 + 0x38);
  if (plVar15 == (long *)0x0) {
    FUN_03c8f898(PTR_DAT_08e6a288);
    FUN_03c8f898(PTR_DAT_08e82068);
    FUN_03c8f898(PTR_DAT_08e82048);
    FUN_03c8f898(PTR_DAT_08e6a290);
    FUN_03c8f898(PTR_DAT_08e82050);
    FUN_03c8f898(PTR_DAT_08e706b8);
    FUN_03c8f898(PTR_DAT_08e82070);
    FUN_03c8f898(PTR_DAT_08e82078);
    FUN_03c8f898(PTR_DAT_08e82080);
    FUN_03c8f898(PTR_DAT_08e82088);
    FUN_03c8f898(PTR_DAT_08e82058);
    FUN_03c8f898(PTR_DAT_08e82060);
    plVar15 = *(long **)(param_4 + 0x38);
    if (plVar15 == (long *)0x0) {
      FUN_03cf12a0(param_4);
      plVar15 = *(long **)(param_4 + 0x38);
    }
  }
  lVar11 = *plVar15;
  if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_03cf1244();
  }
  iVar2 = *(int *)(lVar11 + 0xfc);
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar12 = FUN_07f301e4(*(long *)(param_1 + 0x10),0);
    if ((uVar12 & 1) == 0) {
      if (param_3 != 1) {
        plVar15 = *(long **)(param_1 + 0x58);
      }
      else {
        uVar17 = *(undefined8 *)(param_1 + 0x10);
        plVar15 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e82058);
        FUN_07f5836c(plVar15,uVar17,0);
      }
    }
    else if (param_3 != 1) {
      plVar15 = *(long **)(param_1 + 0x60);
    }
    else {
      uVar17 = *(undefined8 *)(param_1 + 0x10);
      plVar15 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e82060);
      FUN_07f581d8(plVar15,uVar17,0);
    }
    puVar7 = PTR_DAT_08e82050;
    if (plVar15 != (long *)0x0) {
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e82050) {
            puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto 
            Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<TransformAccessJob_TransformData>
            ;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)PTR_DAT_08e82050,1);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<TransformAccessJob_TransformData>
      :
      (*(code *)*puVar13)(plVar15,puVar13[1]);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (plVar14 = (long *)FUN_07f30208(*(long *)(param_1 + 0x10),0), plVar14 != (long *)0x0)) {
        lVar11 = *plVar14;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e706b8) {
              puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_047b0258;
            }
            uVar12 = uVar12 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e706b8,0);
LAB_047b0258:
        uVar9 = (*(code *)*puVar13)(plVar14,puVar13[1]);
        uVar10 = FUN_07dd3258(2,0);
        FUN_0564bc48(unaff_x29 + -0x28,uVar9,uVar10,*(undefined8 *)PTR_DAT_08e82088);
        plVar14 = *(long **)(param_4 + 0x38);
        lVar11 = *plVar14;
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_03cf1244();
          plVar14 = *(long **)(param_4 + 0x38);
        }
        lVar1 = *(long *)(unaff_x29 + -0x18);
        if (-1 < *(int *)(*plVar14 + 0x28)) {
          lVar1 = unaff_x29 + -0x18;
        }
        FUN_03c90414(lVar11,plVar14[1],
                     (long)&stack0x00000000 - ((ulong)(iVar2 + 0x10) + 0xf & 0x1fffffff0),lVar1,0,
                     unaff_x29 + -0x10);
        puVar8 = PTR_DAT_08e82070;
        puVar6 = PTR_DAT_08e82048;
        puVar5 = PTR_DAT_08e6a290;
        plVar14 = *(long **)(unaff_x29 + -0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb30();
        }
        do {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_047b033c;
              }
              uVar12 = uVar12 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar5,0);
LAB_047b033c:
          uVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          puVar4 = PTR_DAT_08e6a288;
          if ((uVar12 & 1) == 0)
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>
          ;
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_047b0398;
              }
              uVar12 = uVar12 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar12 != 0);
          }
          puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar6,0);
LAB_047b0398:
          uVar17 = (*(code *)*puVar13)(plVar14,puVar13[1]);
          FUN_0564be68(unaff_x29 + -0x28,uVar17,*(undefined8 *)puVar8);
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_144>
  :
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e6a288) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047b0414;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e6a288,0);
LAB_047b0414:
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar14 = (long *)FUN_07f30208(*(long *)(param_1 + 0x10),0);
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_08e82068) {
        puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_047b0490;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)PTR_DAT_08e82068,0);
LAB_047b0490:
  plVar14 = (long *)(*(code *)*puVar13)(plVar14,puVar13[1]);
  puVar8 = PTR_DAT_08e82078;
  puVar6 = PTR_DAT_08e82048;
  puVar5 = PTR_DAT_08e6a290;
  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }

  Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>
  :
  lVar11 = *plVar14;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
        puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_047b0508;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar5,0);
LAB_047b0508:
  uVar12 = (*(code *)*puVar13)(plVar14,puVar13[1]);
  if ((uVar12 & 1) != 0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047b0564;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar6,0);
LAB_047b0564:
    uVar17 = (*(code *)*puVar13)(plVar14,puVar13[1]);
    uVar12 = FUN_0564bef4(unaff_x29 + -0x28,uVar17,*(undefined8 *)puVar8);
    if ((uVar12 & 1) == 0) {
      lVar11 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
            puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_047b05d4;
          }
          uVar12 = uVar12 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar12 != 0);
      }
      puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)puVar7,0);
LAB_047b05d4:
      (*(code *)*puVar13)(plVar15,uVar17,puVar13[1]);
    }
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_4>
    ;
  }
  if (plVar14 != (long *)0x0) {
    lVar11 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar4) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>
          ;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar14,*(long *)puVar4,0);

    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_84>
    :
    (*(code *)*puVar13)(plVar14,puVar13[1]);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar12 = FUN_07f3793c(*(long *)(param_1 + 0x10),0);
  if (((uVar12 & 1) == 0) &&
     (uVar12 = FUN_0564bef4(unaff_x29 + -0x28,0,*(undefined8 *)PTR_DAT_08e82078), (uVar12 & 1) == 0)
     ) {
    lVar11 = *plVar15;
    uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar12 != 0) {
      piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
          puVar13 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_047b06e0;
        }
        uVar12 = uVar12 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar12 != 0);
    }
    puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)puVar7,0);
LAB_047b06e0:
    (*(code *)*puVar13)(plVar15,0,puVar13[1]);
  }
  lVar11 = *plVar15;
  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
  if (uVar12 != 0) {
    piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == *(long *)puVar7) {
        puVar13 = (undefined8 *)(lVar11 + (long)(*piVar16 + 2) * 0x10 + 0x138);
        goto LAB_047b0740;
      }
      uVar12 = uVar12 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar12 != 0);
  }
  puVar13 = (undefined8 *)FUN_03cf1348(plVar15,*(long *)puVar7,2);
LAB_047b0740:
  uVar17 = (*(code *)*puVar13)(plVar15,puVar13[1]);
  FUN_0564bdc0(unaff_x29 + -0x28,*(undefined8 *)PTR_DAT_08e82080);
  if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


