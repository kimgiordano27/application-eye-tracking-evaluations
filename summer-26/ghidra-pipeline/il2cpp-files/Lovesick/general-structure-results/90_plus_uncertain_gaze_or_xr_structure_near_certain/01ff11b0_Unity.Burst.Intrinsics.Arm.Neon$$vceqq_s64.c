/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vceqq_s64
ENTRY_POINT: 01ff11b0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_12;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


long * Unity_Burst_Intrinsics_Arm_Neon__vceqq_s64(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  long unaff_x19;
  uint uVar22;
  long unaff_x20;
  long *unaff_x21;
  long *plVar23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(System_Globalization_DateTimeFormatInfoScanner_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3724);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__);
  thunk_FUN_00d48444(StringLiteral_3919);
  thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
  thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x80f) = 1;
  puVar3 = Method_System_Nullable<OVRPlugin_Result>__ctor__;
  if (unaff_x19 == 0) {
LAB_01ff1690:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar8 = thunk_FUN_00d93c64();
  lVar9 = (**(code **)(*unaff_x21 + 0x1a8))();
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)puVar3);
  }
  plVar10 = (long *)FUN_01ff1698();
  plVar23 = (long *)StringLiteral_3919;
  plVar16 = (long *)StringLiteral_3724;
  puVar17 = (undefined8 *)UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
  plVar15 = (long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
  if (lVar9 == 0) goto LAB_01ff1690;
  if (*(long *)(lVar9 + 0x18) == 0) {
    lVar9 = *(long *)StringLiteral_3724;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *plVar16;
    }
    return (long *)**(undefined8 **)(lVar9 + 0xb8);
  }
  if (plVar10 != (long *)0x0) {
    lVar11 = *(long *)StringLiteral_3919;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar11 = *plVar23;
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x68);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x60);
    uVar12 = thunk_FUN_00d61fa0(*puVar17,&stack0x00000010);
    lVar18 = *plVar10;
    lVar11 = *plVar15;
    uVar20 = (ulong)*(ushort *)(lVar18 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == lVar11) {
          puVar13 = (undefined8 *)(lVar18 + (long)*piVar21 * 0x10 + 0x138);
          goto LAB_01ff1324;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar13 = (undefined8 *)FUN_00d59724(plVar10,lVar11,0);
LAB_01ff1324:
    plVar14 = (long *)(*(code *)*puVar13)(plVar10,uVar12,puVar13[1]);
    if (plVar14 != (long *)0x0) {
      bVar2 = *(byte *)(*plVar16 + 300);
      if ((bVar2 <= *(byte *)(*plVar14 + 300)) &&
         (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar2 * 8 + -8) == *plVar16)) {
        return plVar14;
      }
    }
  }
  puVar5 = StringLiteral_1821;
  puVar4 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
  puVar3 = OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo;
  if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
    uVar20 = 0;
    plVar14 = (long *)0x0;
    uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
    do {
      if (uVar19 <= uVar20) {
LAB_01ff1694:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      uVar12 = *(undefined8 *)(lVar9 + uVar20 * 8 + 0x20);
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar11 = FUN_01ff1704(uVar12);
      if (plVar14 == (long *)0x0) {
        if ((lVar11 == 0) ||
           (plVar14 = (long *)thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033ee168),
           plVar14 == (long *)0x0)) goto LAB_01ff1690;
        FUN_01743cd4(plVar14,*(int *)(lVar9 + 0x18) * *(int *)(lVar11 + 0x18),0);
      }
      else if (lVar11 == 0) goto LAB_01ff1690;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (0 < (int)uVar1) {
        uVar22 = 0;
        do {
          if (uVar1 <= uVar22) goto LAB_01ff1694;
          plVar23 = *(long **)(lVar11 + (long)(int)uVar22 * 8 + 0x20);
          if (plVar23 == (long *)0x0) goto LAB_01ff1690;
          plVar15 = (long *)(**(code **)(*plVar23 + 0x198))
                                      (plVar23,*(undefined8 *)(*plVar23 + 0x1a0));
          lVar18 = *(long *)puVar4;
          uVar12 = *(undefined8 *)puVar5;
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_00d32864(lVar18);
          }
          uVar12 = FUN_01780344(uVar12,0);
          if (plVar15 == (long *)0x0) goto LAB_01ff1690;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x1d8))
                                      (plVar15,uVar12,*(undefined8 *)(*plVar15 + 0x1e0));
          if ((plVar15 != (long *)0x0) && (*plVar15 == *(long *)puVar3)) {
            lVar18 = *(long *)puVar4;
            plVar15 = (long *)plVar15[4];
            if (*(int *)(lVar18 + 0xe0) == 0) {
              thunk_FUN_00d32864(lVar18);
            }
            uVar19 = FUN_0178a8c4(plVar15,0,0);
            if ((uVar19 & 1) != 0) {
              if (plVar15 == (long *)0x0) goto LAB_01ff1690;
              uVar19 = (**(code **)(*plVar15 + 0x2c8))
                                 (plVar15,uVar8,*(undefined8 *)(*plVar15 + 0x2d0));
              if ((uVar19 & 1) != 0) {
                if (plVar14 == (long *)0x0) goto LAB_01ff1690;
                (**(code **)(*plVar14 + 0x308))(plVar14,plVar23,*(undefined8 *)(*plVar14 + 0x310));
              }
            }
          }
          uVar1 = *(uint *)(lVar11 + 0x18);
          uVar22 = uVar22 + 1;
        } while ((int)uVar22 < (int)uVar1);
      }
      puVar6 = StringLiteral_3724;
      puVar17 = (undefined8 *)
                UnityEngine_Rendering_Universal_LibTessDotNet_Tess_ActiveRegion_TypeInfo;
      plVar15 = (long *)System_Globalization_DateTimeFormatInfoScanner_TypeInfo;
      uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
      uVar20 = uVar20 + 1;
      plVar23 = (long *)StringLiteral_3919;
    } while ((long)uVar20 < (long)(int)*(uint *)(lVar9 + 0x18));
    plVar16 = (long *)StringLiteral_3724;
    if (plVar14 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar14 + 0x298))(plVar14,*(undefined8 *)(*plVar14 + 0x2a0));
      uVar8 = FUN_00da4fb8(*(undefined8 *)
                            Method_System_Collections_Generic_List_Enumerator<DebugInspector>_MoveNext__
                           ,uVar7);
      (**(code **)(*plVar14 + 0x368))(plVar14,uVar8,0,*(undefined8 *)(*plVar14 + 0x370));
      plVar16 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar6);
      if (plVar16 == (long *)0x0) goto LAB_01ff1690;
      FUN_01fdf08c(plVar16,uVar8,1,0);
      plVar23 = (long *)StringLiteral_3919;
      goto joined_r0x01ff15d4;
    }
  }
  lVar9 = *plVar16;
  if (*(int *)(lVar9 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar9 = *plVar16;
  }
  plVar16 = (long *)**(long **)(lVar9 + 0xb8);
joined_r0x01ff15d4:
  if (plVar10 != (long *)0x0) {
    lVar9 = *plVar23;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar9 = *plVar23;
    }
    in_stack_00000018 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x68);
    in_stack_00000010 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x60);
    uVar8 = thunk_FUN_00d61fa0(*puVar17,&stack0x00000010);
    lVar9 = *plVar10;
    uVar20 = (ulong)*(ushort *)(lVar9 + 0x12a);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *plVar15) {
          puVar17 = (undefined8 *)(lVar9 + (long)(*piVar21 + 1) * 0x10 + 0x138);
          goto LAB_01ff1658;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar17 = (undefined8 *)FUN_00d59724(plVar10,*plVar15,1);
LAB_01ff1658:
    (*(code *)*puVar17)(plVar10,uVar8,plVar16,puVar17[1]);
  }
  return plVar16;
}


