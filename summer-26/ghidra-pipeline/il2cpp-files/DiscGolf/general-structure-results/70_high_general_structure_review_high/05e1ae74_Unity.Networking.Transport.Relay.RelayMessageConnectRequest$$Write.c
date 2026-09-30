/*
FUNCTION_NAME: Unity.Networking.Transport.Relay.RelayMessageConnectRequest$$Write
ENTRY_POINT: 05e1ae74
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Networking_Transport_Relay_RelayMessageConnectRequest__Write
          (undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  byte *unaff_x20;
  int unaff_w21;
  int iVar26;
  long unaff_x22;
  int iVar27;
  undefined8 *unaff_x23;
  long unaff_x24;
  byte *unaff_x25;
  long unaff_x27;
  byte *unaff_x28;
  ulong unaff_x29;
  undefined1 auVar28 [12];
  byte *in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000070;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  ulong in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ulong in_stack_000000c0;
  ulong in_stack_000000c8;
  ulong in_stack_000000d0;
  ulong in_stack_000000d8;
  ulong in_stack_000000e0;
  ulong in_stack_000000e8;
  ulong in_stack_000000f0;
  ulong in_stack_000000f8;
  ulong in_stack_00000100;
  char cStack0000000000000108;
  ulong in_stack_00000118;
  ulong in_stack_00000120;
  ulong uStack0000000000000168;
  undefined4 uStack0000000000000170;
  int iStack0000000000000174;
  int iStack0000000000000178;
  int iStack000000000000017c;
  undefined4 uStack0000000000000180;
  undefined4 uStack0000000000000184;
  undefined4 uStack0000000000000188;
  undefined4 uStack000000000000018c;
  undefined4 uStack0000000000000190;
  int iStack0000000000000194;
  int iStack0000000000000198;
  undefined4 uStack000000000000019c;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
code_r0x05e1ae74:
  uStack0000000000000168 = 0;
  FUN_0432fe24(&stack0x00000168,param_1,param_3);
  in_stack_000000e8 = uStack0000000000000168;
FUN_05e1b3f4:
  unaff_x28 = unaff_x28 + 5;
  if ((int)unaff_x29 != 3) {
    unaff_x28 = unaff_x20 + unaff_x29;
  }
  if (unaff_x25 <= unaff_x28) {
    if (in_stack_00000070 == 0) goto LAB_05e1b4f4;
    uVar21 = FUN_040ff9fc(in_stack_00000070,
                          *(undefined8 *)
                           Method_System_Collections_Generic_List<StyleSelectorPart>_AddRange__);
    *(undefined8 *)(unaff_x27 + 0x20) = uVar21;
    LeanTween__value();
    puVar6 = Method_System_Collections_Generic_List<TMP_SpriteCharacter>__ctor__;
    puVar5 = Method_System_Collections_Generic_List<TMP_Sprite>_get_Item__;
    puVar4 = Method_System_Collections_Generic_List<TMP_Sprite>_get_Count__;
    if (unaff_x22 != 0) {
      uVar21 = FUN_040fce44(unaff_x22,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List<TMP_Character>_get_Item__);
      *(undefined8 *)(unaff_x27 + 0x28) = uVar21;
      LeanTween__value();
      FUN_040fbe1c(&stack0x00000080,unaff_x22,*(undefined8 *)puVar6);
      uStack0000000000000168 = 0;
      _uStack0000000000000170 = &stack0x00000080;
      goto LAB_05e1b48c;
    }
    goto LAB_05e1b4f4;
  }
  bVar2 = *unaff_x28;
  if (bVar2 == 0xfe) {
    thunk_FUN_02dfd288(PTR_DAT_069ff490);
    uVar21 = thunk_FUN_02dd3144();
    uVar23 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<TMP_SpriteGlyph>_Clear__);
    FUN_054ea764(uVar21,uVar23,0);
    uVar23 = thunk_FUN_02dfd288(Method_System_Collections_Generic_List<TMP_SpriteGlyph>_get_Count__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar21,uVar23);
  }
  bVar1 = bVar2 & 0xfc;
  unaff_x29 = (ulong)bVar2 & 3;
  unaff_x20 = unaff_x28 + 1;
  if (bVar1 < 0x55) {
    if (bVar1 < 0x19) {
      if (bVar1 < 9) {
        if (bVar1 == 4) {
          uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
          uStack0000000000000168 = 0;
          FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
          in_stack_000000c0 = uStack0000000000000168;
        }
        else if (bVar1 == 8) {
          uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
          FUN_05e1b5f8(&stack0x00000110,uVar7);
        }
      }
      else if (bVar1 == 0x14) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000c8 = uStack0000000000000168;
      }
      else if (bVar1 == 0x18) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_00000118 = uStack0000000000000168;
      }
      goto FUN_05e1b3f4;
    }
    if (bVar1 < 0x29) {
      if (bVar1 == 0x24) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000d0 = uStack0000000000000168;
      }
      else if (bVar1 == 0x28) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_00000120 = uStack0000000000000168;
      }
      goto FUN_05e1b3f4;
    }
    if (bVar1 == 0x34) {
      uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
      uStack0000000000000168 = 0;
      FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
      in_stack_000000d8 = uStack0000000000000168;
      goto FUN_05e1b3f4;
    }
    if (bVar1 == 0x44) {
      uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
      uStack0000000000000168 = 0;
      FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
      in_stack_000000e0 = uStack0000000000000168;
      goto FUN_05e1b3f4;
    }
    if (bVar1 != 0x54) goto FUN_05e1b3f4;
    param_1 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
    param_3 = *unaff_x23;
    goto code_r0x05e1ae74;
  }
  if (bVar1 < 0x85) {
    if (bVar1 < 0x75) {
      if (bVar1 == 100) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000f0 = uStack0000000000000168;
      }
      else if (bVar1 == 0x74) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_000000f8 = uStack0000000000000168;
      }
      goto FUN_05e1b3f4;
    }
    if (bVar1 != 0x80) {
      if (bVar1 == 0x84) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        _cStack0000000000000108 = uStack0000000000000168;
      }
      goto FUN_05e1b3f4;
    }
    uVar7 = 1;
  }
  else if (bVar1 < 0x95) {
    if (bVar1 != 0x90) {
      if (bVar1 == 0x94) {
        uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
        uStack0000000000000168 = 0;
        FUN_0432fe24(&stack0x00000168,uVar7,*unaff_x23);
        in_stack_00000100 = uStack0000000000000168;
      }
      goto FUN_05e1b3f4;
    }
    uVar7 = 2;
  }
  else {
    if (bVar1 == 0xa0) {
      if (unaff_x22 == 0) goto LAB_05e1b4f4;
      iVar27 = *(int *)(unaff_x22 + 0x18);
      uVar7 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
      uVar8 = FUN_05e1b778(&stack0x000000c0,0,&stack0x00000110);
      uVar10 = FUN_05e1b804(&stack0x00000110,0);
      if (in_stack_00000070 != 0) {
        lVar24 = *(long *)(unaff_x22 + 0x10);
        iVar9 = *(int *)(in_stack_00000070 + 0x18);
        lVar25 = *(long *)Method_System_Collections_Generic_List<TMP_SpriteAsset>_get_Item__;
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        if (lVar24 != 0) {
          uVar11 = *(uint *)(unaff_x22 + 0x18);
          if (uVar11 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + (long)(int)uVar11 * 0x18;
            *(uint *)(unaff_x22 + 0x18) = uVar11 + 1;
            *(undefined4 *)(lVar24 + 0x20) = uVar7;
            *(undefined4 *)(lVar24 + 0x24) = uVar10;
            *(undefined4 *)(lVar24 + 0x28) = uVar8;
            *(int *)(lVar24 + 0x2c) = unaff_w21;
            *(undefined4 *)(lVar24 + 0x30) = 0;
            *(int *)(lVar24 + 0x34) = iVar9;
          }
          else {
            uStack0000000000000168 = CONCAT44(uVar10,uVar7);
            _uStack0000000000000170 = (undefined1 *)CONCAT44(unaff_w21,uVar8);
            iStack0000000000000178 = 0;
            iStack000000000000017c = iVar9;
            FUN_040fb190(unaff_x22,&stack0x00000168,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
          FUN_05e1b914(&stack0x00000110);
          unaff_x27 = in_stack_00000028;
          unaff_w21 = iVar27;
          goto FUN_05e1b3f4;
        }
      }
      goto LAB_05e1b4f4;
    }
    if (bVar1 != 0xb0) {
      if (bVar1 != 0xc0) goto FUN_05e1b3f4;
      if (unaff_w21 == -1) {
        return 0;
      }
      if (unaff_x22 == 0) goto LAB_05e1b4f4;
      FUN_040fae20(&stack0x00000168,unaff_x22,unaff_w21,
                   *(undefined8 *)
                    Method_System_Collections_Generic_List<TMP_SpriteCharacter>_get_Count__);
      in_stack_000000b0 = uStack0000000000000168;
      in_stack_000000b8 = uStack0000000000000170;
      if (in_stack_00000070 != 0) {
        iVar27 = iStack0000000000000174;
        iStack0000000000000178 = *(int *)(in_stack_00000070 + 0x18) - iStack000000000000017c;
        FUN_040fae88(unaff_x22,unaff_w21,&stack0x00000168,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TMP_SpriteCharacter>_get_Item__);
        FUN_05e1b914(&stack0x00000110);
        unaff_w21 = iVar27;
                    /* try { // try from 05e1af3c to 05f1af63 has its CatchHandler @ 05e1b128 */
        goto FUN_05e1b3f4;
      }
      goto LAB_05e1b4f4;
    }
    uVar7 = 3;
  }
  uVar8 = FUN_05e1b984(_cStack0000000000000108,uVar7,unaff_x24);
  if (unaff_x24 != 0) {
    auVar28 = FUN_041004f0(unaff_x24,uVar8,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TMP_SpriteCharacter>_Clear__);
    iVar27 = (uint)(cStack0000000000000108 != '\0') << 3;
    if (auVar28._8_4_ != 0) {
      iVar27 = auVar28._8_4_;
    }
    iVar9 = FUN_0432fe68(&stack0x00000100,1,
                         *(undefined8 *)
                          Method_System_Collections_Generic_List<TMP_SpriteGlyph>_Add__);
    uVar10 = FUN_05e1b590(unaff_x29,unaff_x20,unaff_x25);
    if (0 < iVar9) {
      iVar26 = 0;
      do {
        uVar11 = FUN_05e1b804(&stack0x00000110,iVar26);
        uVar12 = FUN_05e1b778(&stack0x000000c0,iVar26,&stack0x00000110);
        puVar4 = Method_System_Collections_Generic_List<TMP_SpriteGlyph>_Add__;
        iVar13 = FUN_0432fe68(&stack0x000000f8,8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List<TMP_SpriteGlyph>_Add__);
        uVar14 = FUN_0432fe68(&stack0x00000108,1,*(undefined8 *)puVar4);
        iVar15 = FUN_0432fe68((ulong)&stack0x000000c0 | 8,0,*(undefined8 *)puVar4);
        iVar16 = FUN_0432fe68(&stack0x000000d0,0,*(undefined8 *)puVar4);
        uVar17 = FUN_05e1bb0c(&stack0x000000c0);
        uVar18 = Unity_Networking_Transport_Relay_RelayHMACKey__FromByteArray(&stack0x000000c0);
        uVar19 = FUN_0432fe68(&stack0x000000e8,0,*(undefined8 *)puVar4);
        uVar20 = FUN_0432fe68(&stack0x000000f0,0,*(undefined8 *)puVar4);
        if (in_stack_00000070 == 0) goto LAB_05e1b4f4;
        lVar24 = *(long *)(in_stack_00000070 + 0x10);
        lVar25 = *(long *)Method_System_Collections_Generic_List<StyleSelectorPart>_Add__;
        *(int *)(in_stack_00000070 + 0x1c) = *(int *)(in_stack_00000070 + 0x1c) + 1;
        if (lVar24 == 0) goto LAB_05e1b4f4;
        uVar3 = *(uint *)(in_stack_00000070 + 0x18);
        if (uVar3 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (long)(int)uVar3 * 0x48;
          *(uint *)(in_stack_00000070 + 0x18) = uVar3 + 1;
          *(int *)(lVar24 + 0x30) = iVar15;
          *(int *)(lVar24 + 0x34) = iVar16;
          *(uint *)(lVar24 + 0x20) = uVar11 & 0xffff;
          *(undefined4 *)(lVar24 + 0x24) = uVar12;
          *(undefined4 *)(lVar24 + 0x28) = uVar20;
          *(undefined4 *)(lVar24 + 0x2c) = uVar19;
          *(undefined4 *)(lVar24 + 0x38) = uVar17;
          *(undefined4 *)(lVar24 + 0x3c) = uVar18;
          *(undefined4 *)(lVar24 + 0x40) = uVar7;
          *(undefined4 *)(lVar24 + 0x44) = 0;
          *(undefined4 *)(lVar24 + 0x48) = uVar14;
          *(int *)(lVar24 + 0x4c) = iVar13;
          *(int *)(lVar24 + 0x50) = iVar27;
          *(undefined4 *)(lVar24 + 0x54) = uVar10;
          *(undefined8 *)(lVar24 + 0x58) = 0;
          *(undefined8 *)(lVar24 + 0x60) = 0;
        }
        else {
          uStack0000000000000168 = CONCAT44(uVar12,uVar11) & 0xffffffff0000ffff;
          _uStack0000000000000170 = (undefined1 *)CONCAT44(uVar19,uVar20);
          uStack000000000000018c = 0;
          in_stack_000001a0 = 0;
          in_stack_000001a8 = 0;
          iStack0000000000000178 = iVar15;
          iStack000000000000017c = iVar16;
          uStack0000000000000180 = uVar17;
          uStack0000000000000184 = uVar18;
          uStack0000000000000188 = uVar7;
          uStack0000000000000190 = uVar14;
          iStack0000000000000194 = iVar13;
          iStack0000000000000198 = iVar27;
          uStack000000000000019c = uVar10;
          FUN_040fdca0(in_stack_00000070,&stack0x00000168,
                       *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        iVar26 = iVar26 + 1;
        iVar27 = iVar13 + iVar27;
      } while (iVar9 != iVar26);
    }
    FUN_0410054c(in_stack_00000018,uVar8,auVar28._0_8_,iVar27,
                 *(undefined8 *)Method_System_Collections_Generic_List<TMP_SpriteGlyph>__ctor__);
    FUN_05e1b914(&stack0x00000110);
    unaff_x22 = in_stack_00000020;
    unaff_x23 = (undefined8 *)PTR_DAT_06a0b210;
    unaff_x24 = in_stack_00000018;
    unaff_x25 = in_stack_00000010;
    unaff_x27 = in_stack_00000028;
    goto FUN_05e1b3f4;
  }
LAB_05e1b4f4:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while ((uStack000000000000009c != -1 || (uStack0000000000000090 != 1))) {
LAB_05e1b48c:
    uVar22 = FUN_05189b3c(&stack0x00000080,*(undefined8 *)puVar5);
    if ((uVar22 & 1) == 0) goto LAB_05e1b4bc;
  }
  *(undefined8 *)(unaff_x27 + 8) = uStack0000000000000094;
LAB_05e1b4bc:
  FUN_05189b38(&stack0x00000080,*(undefined8 *)puVar4);
  return 1;
}


