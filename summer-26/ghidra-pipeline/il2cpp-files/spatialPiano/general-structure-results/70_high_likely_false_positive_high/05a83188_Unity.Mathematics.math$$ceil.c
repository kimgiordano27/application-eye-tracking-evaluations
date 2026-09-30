/*
FUNCTION_NAME: Unity.Mathematics.math$$ceil
ENTRY_POINT: 05a83188
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void Unity_Mathematics_math__ceil(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar14;
  int iVar15;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined1 (*pauVar16) [16];
  undefined1 auVar17 [16];
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000070;
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
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x25 + 0x364) = 1;
  in_stack_00000120 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  lVar7 = thunk_FUN_02f45270(*unaff_x23);
  FUN_05a8d620(lVar7,0);
  if (unaff_x20 == 0) {
    thunk_FUN_02f6ef30(PTR_DAT_067c9620);
    uVar9 = thunk_FUN_02f45270();
    uVar10 = thunk_FUN_02f6ef30(PTR_DAT_067ca368);
    FUN_0504ee1c(uVar9,uVar10,0);
    uVar10 = thunk_FUN_02f6ef30(
                               Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02f0888c(uVar9,uVar10);
  }
  *unaff_x22 = 0;
  *unaff_x21 = 0;
  auVar17 = FUN_05a778b8();
  if (lVar7 != 0) {
    pauVar16 = (undefined1 (*) [16])(lVar7 + 0x10);
    *pauVar16 = auVar17;
    puVar4 = Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__;
    puVar3 = PTR_DAT_067c9338;
    if ((unaff_w24 < 0) || (iVar6 = auVar17._12_4_, iVar6 <= unaff_w24)) {
      uVar9 = thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x48),&stack0x00000018);
      FUN_02a7da48(lVar7);
      thunk_FUN_02f6ef30(
                        Method_UnityEngine_UIElements_UxmlFactory<Vector4Field,_Vector4Field_UxmlTraits>__ctor__
                        );
      thunk_FUN_02f44ec4(*(undefined8 *)(puVar3 + 0x48));
      uVar10 = thunk_FUN_02f6ef30(
                                 Method_Unity_AppUI_UI_NumericalField_UxmlSerializedData<double>__ctor__
                                 );
      uVar9 = FUN_04f7005c(uVar10,uVar9);
      thunk_FUN_02f6ef30(PTR_DAT_067c9678);
      uVar10 = thunk_FUN_02f45270();
      uVar12 = thunk_FUN_02f6ef30(
                                 Method_UnityEngine_UIElements_UxmlFactory<ToggleButtonGroup,_ToggleButtonGroup_UxmlTraits>__ctor__
                                 );
      FUN_0505262c(uVar10,uVar9,uVar12,0);
      uVar9 = thunk_FUN_02f6ef30(
                                Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<SortColumnDescription>__ctor__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02f0888c(uVar10,uVar9);
    }
    FUN_0404805c(&stack0x00000018,pauVar16,unaff_w24,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList<IntPtr>_AddRange__);
    memcpy(&stack0x00000070,&stack0x00000018,0x58);
    uVar8 = FUN_05a90350(&stack0x00000070,0);
    if ((uVar8 & 1) == 0) {
      lVar7 = *(long *)(unaff_x20 + 200);
      if (lVar7 == 0) {
        FUN_05a78fb8();
        lVar7 = *(long *)(unaff_x20 + 200);
        if (lVar7 == 0) goto LAB_05a83528;
      }
      FUN_05a779ac(lVar7);
      lVar13 = *(long *)(lVar7 + 0x60);
      uVar5 = FUN_05a79368();
      if (lVar13 == 0) goto LAB_05a83528;
      iVar6 = FUN_05a98a74(lVar13,*(undefined4 *)(lVar7 + 0x58),uVar5,0);
      lVar7 = FUN_05a92e24(lVar13,0);
      pcVar2 = (char *)(lVar7 + (long)iVar6 * 0x20);
      if (*pcVar2 != '\0') {
        if (*(long *)(lVar13 + 0x18) == 0) goto LAB_05a83528;
        if (*(uint *)(*(long *)(lVar13 + 0x18) + 0x18) <= (uint)*(ushort *)(pcVar2 + 0xe)) {
LAB_05a8352c:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
      }
      FUN_0404805c(&stack0x00000018,pauVar16,unaff_w24,*(undefined8 *)puVar4);
      memcpy(&stack0x000000d0,&stack0x00000018,0x58);
      uVar9 = FUN_05a9b3c8(&stack0x000000d0,0);
      uVar8 = FUN_04f6ebb4(uVar9,0);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
      if (((uVar8 & 1) == 0) &&
         (uVar8 = FUN_04f6ebb4(*(undefined8 *)(unaff_x20 + 0x38),0), uVar9 = in_stack_00000118,
         (uVar8 & 1) == 0)) {
        uVar9 = FUN_05a9b3c8(&stack0x000000d0,0);
        uVar9 = FUN_04f65260(uVar9,*(undefined8 *)
                                    Method_UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>__ctor__
                             ,0);
      }
      in_stack_00000118 = uVar9;
      FUN_05a9b81c(&stack0x000000d0);
    }
    else {
      FUN_0404805c(&stack0x00000018,pauVar16,unaff_w24,*(undefined8 *)puVar4);
      memcpy(&stack0x00000070,&stack0x00000018,0x58);
      uVar9 = FUN_05a93d10(&stack0x00000070,0);
      FUN_05aaa524(uVar9,0);
      iVar14 = unaff_w24 + 1;
      *(int *)(lVar7 + 0x20) = iVar14;
      iVar15 = iVar14;
      if (iVar14 < iVar6) {
        do {
          FUN_0404805c(&stack0x00000018,pauVar16,iVar14,*(undefined8 *)puVar4);
          memcpy(&stack0x00000070,&stack0x00000018,0x58);
          uVar8 = FUN_05a925d4(&stack0x00000070,0);
          iVar15 = iVar14;
          if ((uVar8 & 1) == 0) break;
          iVar14 = iVar14 + 1;
          iVar15 = iVar6;
        } while (iVar6 != iVar14);
        iVar14 = *(int *)(lVar7 + 0x20);
      }
      puVar3 = PTR_DAT_067c9070;
      *(int *)(lVar7 + 0x30) = iVar15 - iVar14;
      uVar9 = FUN_02f0880c(*(undefined8 *)puVar3);
      *(undefined8 *)(lVar7 + 0x28) = uVar9;
      puVar3 = PTR_DAT_067cc628;
      if (0 < *(int *)(lVar7 + 0x30)) {
        uVar8 = 0;
        do {
          uVar10 = FUN_05a8305c();
          uVar11 = FUN_04f6ebb4(uVar10,0);
          lVar13 = *(long *)(lVar7 + 0x28);
          uVar9 = *(undefined8 *)puVar3;
          if ((uVar11 & 1) == 0) {
            uVar9 = uVar10;
          }
          if (lVar13 == 0) goto LAB_05a83528;
          if (*(uint *)(lVar13 + 0x18) <= uVar8) goto LAB_05a8352c;
          lVar1 = uVar8 * 8;
          uVar8 = uVar8 + 1;
          *(undefined8 *)(lVar13 + lVar1 + 0x20) = uVar9;
        } while ((long)uVar8 < (long)*(int *)(lVar7 + 0x30));
      }
      uVar9 = FUN_05a9c0e8(in_stack_00000000,0);
      uVar8 = FUN_04f6ebb4(uVar9,0);
      if ((uVar8 & 1) == 0) {
        uVar10 = thunk_FUN_02f45270(*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>_TypeInfo
                                   );
        FUN_04e02ad4(uVar10,lVar7,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory<SortColumnDescriptions>__ctor__
                     ,0);
        FUN_05aae970(uVar9,uVar10,0);
      }
      else {
        FUN_0355644c(*(undefined8 *)PTR_DAT_067ce968,*(undefined8 *)(lVar7 + 0x28),
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_SortColumnDescription_UxmlObjectFactory<SortColumnDescription>__ctor__
                    );
      }
    }
    return;
  }
LAB_05a83528:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


