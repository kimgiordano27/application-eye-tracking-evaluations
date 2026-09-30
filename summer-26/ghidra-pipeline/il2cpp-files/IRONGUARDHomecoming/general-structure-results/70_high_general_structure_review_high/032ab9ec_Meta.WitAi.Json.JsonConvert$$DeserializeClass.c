/*
FUNCTION_NAME: Meta.WitAi.Json.JsonConvert$$DeserializeClass
ENTRY_POINT: 032ab9ec
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x032ac5e8) */
/* WARNING: Removing unreachable block (ram,0x032ac6b4) */

void Meta_WitAi_Json_JsonConvert__DeserializeClass(void)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  long unaff_x19;
  undefined8 uVar23;
  long *unaff_x20;
  long lVar24;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar25;
  long lStack0000000000000010;
  long lStack0000000000000018;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<Attribute>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<Color>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<CreepUnit>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<HandSkeletonJoint>__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                    );
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InputControl>__);
  thunk_FUN_01efb3a4(
                    Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes,_FixedString32Bytes>__
                    );
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InputControlAttribute>__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InternedString>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InvalidInput>__);
  thunk_FUN_01efb3a4(
                    Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes>__
                    );
  thunk_FUN_01efb3a4(
                    Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString512Bytes,_FixedString512Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes>__
                    );
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<InvalidOutput>__);
  thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_ToArray<LeaderboardEntry>__);
  thunk_FUN_01efb3a4(
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString128Bytes>__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
  thunk_FUN_01efb3a4(
                    Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString32Bytes>__
                    );
  *(undefined1 *)(unaff_x21 + 0xe1d) = 1;
  puVar5 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if (unaff_x20 == (long *)0x0) goto LAB_032ad478;
  lVar18 = *unaff_x20;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 0x10) * 0x10 + 0x138);
        goto LAB_032abb30;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032abb30:
  cVar9 = (*(code *)*puVar11)();
  puVar8 = Method_System_Linq_Enumerable_ToArray<InvalidOutput>__;
  puVar7 = Method_System_Linq_Enumerable_ToArray<InternedString>__;
  puVar6 = Method_System_Linq_Enumerable_ToArray<Color>__;
  puVar4 = Method_System_Linq_Enumerable_ToArray<Attribute>__;
  plVar1 = (long *)(unaff_x19 + 0x20);
  if (cVar9 != '\f') {
    lStack0000000000000018 = 0;
    lVar18 = 0;
    lStack0000000000000010 = 0;
    plVar12 = (long *)0x0;
LAB_032abc30:
    plVar13 = plVar12;
    lVar24 = *unaff_x20;
    uVar21 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar22 + 0x10) * 0x10 + 0x138);
          goto LAB_032abc80;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032abc80:
    uVar10 = (*(code *)*puVar11)();
    puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
    if (((uVar10 & 0xff) < 0x10) && ((1 << (ulong)(uVar10 & 0x1f) & 0xa100U) != 0)) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 032abf50 to 033abf53 has its CatchHandler @ 032abf74 */
      uVar21 = FUN_03582560(plVar13,0,0);
                    /* try { // try from 032abf54 to 033abf5b has its CatchHandler @ 032abf78 */
      if ((uVar21 & 1) != 0) {
        lVar18 = *unaff_x20;
                    /* try { // try from 032abf5c to 033abf5f has its CatchHandler @ 032abcbc */
                    /* try { // try from 032abf60 to 033abf63 has its CatchHandler @ 032abf6c */
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
                    /* try { // try from 032abf64 to 033abf97 has its CatchHandler @ 032abcbc */
        if (uVar21 == 0) goto LAB_032abf88;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abf60 with catch @ 032abf6c
                        */
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_032abf70;
      }
                    /* try { // try from 032abf98 to 033abf9b has its CatchHandler @ 032abfa8 */
      if (lStack0000000000000018 == 0) {
        lVar18 = *unaff_x20;
        uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar21 == 0) goto LAB_032ac118;
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        goto LAB_032ac100;
      }
      if (lVar18 == 0) goto LAB_032ac128;
                    /* catch() { ... } // from try @ 032abf98 with catch @ 032abfa8 */
      if ((int)*(ulong *)(lVar18 + 0x18) < 1) goto LAB_032abffc;
      uVar21 = 0;
      uVar19 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
      goto LAB_032abfbc;
    }
    uVar21 = thunk_FUN_0340e318(0,*(undefined8 *)puVar6,0);
    plVar12 = plVar13;
    if ((uVar21 & 1) == 0) {
                    /* try { // try from 032abcbc to 033abdcf has its CatchHandler @ 032abcbc
                       catch() { ... } // from try @ 032abcbc with catch @ 032abcbc
                       catch() { ... } // from try @ 032abea4 with catch @ 032abcbc
                       catch() { ... } // from try @ 032abf5c with catch @ 032abcbc
                       catch() { ... } // from try @ 032abf64 with catch @ 032abcbc
                       catch() { ... } // from try @ 032ac008 with catch @ 032abcbc */
      uVar21 = thunk_FUN_0340e318(0,*(undefined8 *)puVar4,0);
      if ((uVar21 & 1) == 0) {
        uVar21 = thunk_FUN_0340e318(0,*(undefined8 *)puVar8,0);
        if ((uVar21 & 1) == 0) {
          uVar21 = thunk_FUN_0340e318(0,*(undefined8 *)puVar7,0);
          if ((uVar21 & 1) == 0) {
            lVar24 = *unaff_x20;
            uVar21 = (ulong)*(ushort *)(lVar24 + 0x12e);
            if (uVar21 != 0) {
              piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
              do {
                if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
                  puVar11 = (undefined8 *)(lVar24 + (long)(*piVar22 + 0x25) * 0x10 + 0x138);
                  goto LAB_032abd48;
                }
                uVar21 = uVar21 - 1;
                piVar22 = piVar22 + 4;
              } while (uVar21 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032abd48:
            (*(code *)*puVar11)();
          }
          else {
            lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
            if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
              lVar24 = FUN_01ecaf44();
            }
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
            if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
              lVar24 = FUN_01ecaf44();
            }
            plVar13 = *(long **)(*(long *)(lVar24 + 0xb8) + 0x10);
            if (plVar13 == (long *)0x0) goto LAB_032ad478;
            lStack0000000000000010 = (**(code **)(*plVar13 + 0x198))();
          }
        }
        else {
          lVar18 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_01ecaf44();
          }
          if (*(int *)(lVar18 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          lVar18 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
          if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
            lVar18 = FUN_01ecaf44();
          }
                    /* try { // try from 032abe9c to 033abea3 has its CatchHandler @ 032abf70 */
          plVar13 = *(long **)(*(long *)(lVar18 + 0xb8) + 0x10);
                    /* try { // try from 032abea4 to 033abf4f has its CatchHandler @ 032abcbc */
          if (plVar13 == (long *)0x0) goto LAB_032ad478;
          lVar18 = (**(code **)(*plVar13 + 0x198))();
        }
      }
      else {
        lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01ecaf44();
        }
                    /* try { // try from 032abe10 to 033abe6f has its CatchHandler @ 032abf80 */
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
        if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
          lVar24 = FUN_01ecaf44();
        }
        if ((long *)**(long **)(lVar24 + 0xb8) == (long *)0x0) goto LAB_032ad478;
        lStack0000000000000018 = (**(code **)(*(long *)**(long **)(lVar24 + 0xb8) + 0x198))();
      }
      goto LAB_032abc30;
    }
    lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = FUN_01ecaf44();
    }
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x20);
    if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
      lVar24 = FUN_01ecaf44();
    }
    plVar12 = *(long **)(*(long *)(lVar24 + 0xb8) + 8);
    if (plVar12 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*plVar12 + 0x198))();
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
                    /* try { // try from 032abdd0 to 033abdf7 has its CatchHandler @ 032abf7c */
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      uVar21 = FUN_03583338(plVar12,0,0);
      if ((uVar21 & 1) == 0) {
        plVar12 = plVar13;
      }
      goto LAB_032abc30;
    }
    goto LAB_032ad478;
  }
  uVar23 = **(undefined8 **)(*plVar1 + 0xc0);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar23 = FUN_03579868(uVar23,0);
  plVar12 = (long *)thunk_FUN_01f117cc(*(undefined8 *)
                                        Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes>__
                                      );
  FUN_0390ca14(plVar12,uVar23,0);
  if (plVar12 == (long *)0x0) goto LAB_032ad478;
  lVar18 = *plVar12;
  uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
  if (uVar21 != 0) {
    piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
    do {
      if (*(long *)(piVar22 + -2) ==
          *(long *)Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__) {
        puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 2) * 0x10 + 0x138);
        goto LAB_032ac040;
      }
      uVar21 = uVar21 - 1;
      piVar22 = piVar22 + 4;
    } while (uVar21 != 0);
  }
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar12,*(long *)
                                  Method_System_Linq_Enumerable_OrderBy<TMP_SpriteGlyph,_uint>__,2);
LAB_032ac040:
  lVar18 = (*(code *)*puVar11)(plVar12);
  lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
    lVar24 = FUN_01ecaf44(lVar24);
  }
  if (lVar18 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = thunk_FUN_01f116d0(lVar18,lVar24);
    if (lVar14 == 0) goto LAB_032ac0cc;
  }
  *unaff_x23 = lVar14;
  lVar24 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar24 + 0x135) & 1) == 0) {
    lVar24 = FUN_01ecaf44(lVar24);
  }
  if ((lVar18 == 0) || (lVar14 = thunk_FUN_01f116d0(lVar18,lVar24), lVar14 != 0)) {
    thunk_FUN_01f51358();
    return;
  }
LAB_032ac0cc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08cfc(lVar18,lVar24);
  while( true ) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abdd0 with catch @ 032abf7c
                        */
    uVar21 = uVar21 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abe10 with catch @ 032abf80
                        */
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_032abf70:
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abe9c with catch @ 032abf70
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abf50 with catch @ 032abf74
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032abf54 with catch @ 032abf78
                        */
    if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
      goto LAB_032ac1b0;
    }
  }
LAB_032abf88:
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032ac1b0:
  lVar18 = (*(code *)*puVar11)();
  if (((lVar18 == 0) || (lVar18 = FUN_0390b368(lVar18,0), lVar18 == 0)) ||
     (lVar24 = FUN_0390b70c(lVar18,0), lVar24 == 0)) goto LAB_032ad478;
  uVar23 = *(undefined8 *)
            Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString128Bytes>__
  ;
  goto LAB_032acc40;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_032ac100:
    if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
      goto LAB_032ac310;
    }
  }
LAB_032ac118:
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032ac310:
  lVar18 = (*(code *)*puVar11)();
  if (((lVar18 != 0) && (lVar18 = FUN_0390b368(lVar18,0), lVar18 != 0)) &&
     (lVar18 = FUN_0390b70c(lVar18,0), lVar18 != 0)) {
    FUN_0390b840(lVar18,*(undefined8 *)
                         Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes>__
                 ,0);
    return;
  }
  goto LAB_032ad478;
LAB_032ac128:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar12 = (long *)FUN_03584c60(plVar13,lStack0000000000000018,0x7c,0);
  bVar2 = false;
  goto LAB_032ac14c;
  while( true ) {
    uVar21 = uVar21 - 1;
    piVar22 = piVar22 + 4;
    if (uVar21 == 0) break;
LAB_032acacc:
    if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
      puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
      goto LAB_032acb04;
    }
  }
LAB_032acae4:
  puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032acb04:
  lVar18 = (*(code *)*puVar11)();
  if ((lVar18 == 0) || (lVar18 = FUN_0390b368(lVar18,0), lVar18 == 0)) goto LAB_032ad478;
  lVar24 = FUN_0390b70c(lVar18,0);
  lVar14 = FUN_01f08890(*(undefined8 *)
                         Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                        ,5);
  if (lVar14 == 0) goto LAB_032ad478;
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_032ad47c;
  *(undefined8 *)(lVar14 + 0x20) =
       *(undefined8 *)Method_System_Linq_Enumerable_ToArray<InvalidInput>__;
  thunk_FUN_01f51358();
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar23 = FUN_0392f7cc(plVar13,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032acaa8 with catch @ 032acb90
                       try { // try from 032acb90 to 033acba7 has its CatchHandler @ 032aca60 */
  if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_032ad47c;
  *(undefined8 *)(lVar14 + 0x28) = uVar23;
                    /* try { // try from 032acba8 to 033acbbf has its CatchHandler @ 032acc2c */
  thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28),uVar23);
  if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_032ad47c;
                    /* try { // try from 032acbc0 to 033acc1b has its CatchHandler @ 032aca60 */
  *(undefined8 *)(lVar14 + 0x30) =
       *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x30));
  uVar23 = FUN_0394335c(plVar12,0);
  if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_032ad47c;
  *(undefined8 *)(lVar14 + 0x38) = uVar23;
  thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x38),uVar23);
  uVar10 = *(uint *)(lVar14 + 0x18);
  puVar11 = (undefined8 *)
            Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString128Bytes,_FixedString128Bytes,_FixedString32Bytes,_FixedString32Bytes>__
  ;
  goto joined_r0x032ac97c;
  while( true ) {
    uVar23 = *(undefined8 *)(lVar18 + 0x20 + uVar21 * 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 032abfe0 to 033ac007 has its CatchHandler @ 032ac01c */
    uVar19 = FUN_03582560(uVar23,0,0);
    if ((uVar19 & 1) != 0) goto LAB_032ac128;
    uVar19 = (ulong)*(uint *)(lVar18 + 0x18);
    uVar21 = uVar21 + 1;
    if ((long)(int)*(uint *)(lVar18 + 0x18) <= (long)uVar21) break;
LAB_032abfbc:
    if (uVar19 <= uVar21) goto LAB_032ad47c;
  }
LAB_032abffc:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
                    /* try { // try from 032ac008 to 033ac013 has its CatchHandler @ 032abcbc */
                    /* try { // try from 032ac014 to 033ac01b has its CatchHandler @ 032ac01c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032abfe0 with catch @ 032ac01c
                       catch(type#2 @ 00000000) { ... } // from try @ 032ac014 with catch @ 032ac01c
                        */
  plVar12 = (long *)FUN_03584d04(plVar13,lStack0000000000000018,0x7c,0,lVar18,0,0);
  bVar2 = true;
LAB_032ac14c:
  uVar21 = FUN_034a66c0(plVar12,0,0);
  if ((uVar21 & 1) == 0) {
    if (plVar12 == (long *)0x0) goto LAB_032ad478;
    uVar21 = (**(code **)(*plVar12 + 0x318))(plVar12,*(undefined8 *)(*plVar12 + 800));
    if ((uVar21 & 1) == 0) {
LAB_032ac2c0:
      lVar18 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_01ecaf44(lVar18);
      }
      if (plVar12 == (long *)0x0) {
        lVar24 = 0;
      }
      else {
        lVar24 = thunk_FUN_01f116d0(plVar12,lVar18);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12,lVar18);
        }
      }
      *unaff_x23 = lVar24;
      lVar18 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x10);
      if ((*(byte *)(lVar18 + 0x135) & 1) == 0) {
        lVar18 = FUN_01ecaf44(lVar18);
      }
      if (plVar12 == (long *)0x0) {
        lVar24 = 0;
      }
      else {
        lVar24 = thunk_FUN_01f116d0(plVar12,lVar18);
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar12,lVar18);
        }
      }
      thunk_FUN_01f51358(unaff_x23,lVar24);
      if (unaff_x22 != 0) {
                    /* try { // try from 032ac7c8 to 033ac813 has its CatchHandler @ 032ac7c8
                       catch() { ... } // from try @ 032ac7c8 with catch @ 032ac7c8
                       catch() { ... } // from try @ 032ac880 with catch @ 032ac7c8
                       catch() { ... } // from try @ 032ac8b0 with catch @ 032ac7c8
                       catch() { ... } // from try @ 032ac930 with catch @ 032ac7c8 */
        FUN_02984264(unaff_x22,*unaff_x23);
        return;
      }
      goto LAB_032ad478;
    }
    if (lStack0000000000000010 == 0) {
      lVar18 = *unaff_x20;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_032ac874;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
                    /* try { // try from 032ac814 to 033ac87f has its CatchHandler @ 032ac880 */
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032ac874:
      lVar18 = (*(code *)*puVar11)();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 032ac814 with catch @ 032ac880
                       try { // try from 032ac880 to 033ac897 has its CatchHandler @ 032ac7c8 */
      if ((lVar18 == 0) || (lVar18 = FUN_0390b368(lVar18,0), lVar18 == 0)) goto LAB_032ad478;
      lVar24 = FUN_0390b70c(lVar18,0);
                    /* try { // try from 032ac898 to 033ac8af has its CatchHandler @ 032ac928 */
                    /* try { // try from 032ac8b0 to 033ac917 has its CatchHandler @ 032ac7c8 */
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar14 == 0) goto LAB_032ad478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x20) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<InvalidInput>__;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar23 = FUN_0392f7cc(plVar13,0);
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x28) = uVar23;
                    /* try { // try from 032ac918 to 033ac927 has its CatchHandler @ 032ac928 */
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28),uVar23);
                    /* catch() { ... } // from try @ 032ac898 with catch @ 032ac928
                       catch() { ... } // from try @ 032ac918 with catch @ 032ac928 */
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_032ad47c;
                    /* try { // try from 032ac92c to 033ac92f has its CatchHandler @ 032ac938 */
                    /* try { // try from 032ac930 to 033ac93b has its CatchHandler @ 032ac7c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032ac92c with catch @ 032ac938
                        */
      *(undefined8 *)(lVar14 + 0x30) =
           *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x30));
      uVar23 = FUN_0394335c(plVar12,0);
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x38) = uVar23;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x38),uVar23);
      uVar10 = *(uint *)(lVar14 + 0x18);
      puVar11 = (undefined8 *)
                Method_Unity_Collections_FixedStringMethods_AppendFormat<FixedString512Bytes,_FixedString512Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes,_FixedString32Bytes>__
      ;
    }
    else {
      lVar18 = (**(code **)(*plVar12 + 0x328))(plVar12,*(undefined8 *)(*plVar12 + 0x330));
      puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
      if (lVar18 == 0) goto LAB_032ad478;
      iVar17 = (int)*(ulong *)(lVar18 + 0x18);
      if (*(int *)(lStack0000000000000010 + 0x18) == iVar17) {
        if (0 < iVar17) {
          uVar21 = 0;
          uVar19 = *(ulong *)(lVar18 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar21) goto LAB_032ad47c;
            uVar23 = *(undefined8 *)(lStack0000000000000010 + 0x20 + uVar21 * 8);
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar19 = FUN_03582560(uVar23,0,0);
            if ((uVar19 & 1) != 0) {
              lVar18 = *unaff_x20;
              uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
              if (uVar21 == 0) goto LAB_032acae4;
              piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              goto LAB_032acacc;
            }
            uVar19 = (ulong)*(uint *)(lStack0000000000000010 + 0x18);
            uVar21 = uVar21 + 1;
          } while ((long)uVar21 < (long)(int)*(uint *)(lStack0000000000000010 + 0x18));
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x408))
                                    (plVar12,lStack0000000000000010,
                                     *(undefined8 *)(*plVar12 + 0x410));
        goto LAB_032ac2c0;
      }
      lVar18 = *unaff_x20;
      uVar21 = (ulong)*(ushort *)(lVar18 + 0x12e);
      if (uVar21 != 0) {
        piVar22 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
            puVar11 = (undefined8 *)(lVar18 + (long)(*piVar22 + 8) * 0x10 + 0x138);
            goto LAB_032ac99c;
          }
          uVar21 = uVar21 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar21 != 0);
      }
      puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032ac99c:
      lVar18 = (*(code *)*puVar11)();
      if ((lVar18 == 0) || (lVar18 = FUN_0390b368(lVar18,0), lVar18 == 0)) goto LAB_032ad478;
      lVar24 = FUN_0390b70c(lVar18,0);
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,5);
      if (lVar14 == 0) goto LAB_032ad478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x20) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<InvalidInput>__;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar23 = FUN_0392f7cc(plVar13,0);
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x28) = uVar23;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28),uVar23);
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_032ad47c;
                    /* try { // try from 032aca60 to 033acaa7 has its CatchHandler @ 032aca60
                       catch() { ... } // from try @ 032aca60 with catch @ 032aca60
                       catch() { ... } // from try @ 032acb90 with catch @ 032aca60
                       catch() { ... } // from try @ 032acbc0 with catch @ 032aca60
                       catch() { ... } // from try @ 032acc34 with catch @ 032aca60 */
      *(undefined8 *)(lVar14 + 0x30) =
           *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x30));
      uVar23 = FUN_0394335c(plVar12,0);
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x38) = uVar23;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x38),uVar23);
      uVar10 = *(uint *)(lVar14 + 0x18);
      puVar11 = (undefined8 *)
                Method_Unity_Collections_FixedStringMethods_CompareTo<FixedString128Bytes,_FixedString32Bytes>__
      ;
    }
joined_r0x032ac97c:
    if (uVar10 < 5) {
LAB_032ad47c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
                    /* try { // try from 032acc1c to 033acc2b has its CatchHandler @ 032acc2c */
    *(undefined8 *)(lVar14 + 0x40) = *puVar11;
  }
  else {
    lVar24 = *unaff_x20;
    uVar21 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar21 != 0) {
      piVar22 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) == *(long *)puVar5) {
          puVar11 = (undefined8 *)(lVar24 + (long)(*piVar22 + 8) * 0x10 + 0x138);
          goto LAB_032ac360;
        }
        uVar21 = uVar21 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar21 != 0);
    }
    puVar11 = (undefined8 *)FUN_01ecb238();
LAB_032ac360:
    lVar24 = (*(code *)*puVar11)();
    if ((lVar24 == 0) || (lVar24 = FUN_0390b368(lVar24,0), lVar24 == 0)) goto LAB_032ad478;
    lVar24 = FUN_0390b70c(lVar24,0);
    if (bVar2) {
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,8);
      if (lVar14 == 0) goto LAB_032ad478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x20) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<LeaderboardEntry>__;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x20));
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28));
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x30) =
           *(undefined8 *)Method_UnityEngine_Rendering_VolumeParameter<Color>__ctor__;
      thunk_FUN_01f51358();
      lVar15 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44();
      }
      if (*(int *)(lVar15 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar15 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x38);
      if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
        lVar15 = FUN_01ecaf44();
      }
      lVar15 = *(long *)(*(long *)(lVar15 + 0xb8) + 8);
      uVar23 = *(undefined8 *)
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
      ;
      if (lVar15 == 0) {
        lVar15 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x38);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar15 = *(long *)(*(long *)(*plVar1 + 0xc0) + 0x38);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01ecaf44();
        }
        uVar25 = **(undefined8 **)(lVar15 + 0xb8);
        lVar15 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Linq_Enumerable_Contains<Spline>__)
        ;
        FUN_02e6c748(lVar15,uVar25,*(undefined8 *)(*(long *)(*plVar1 + 0xc0) + 0x40),0);
        lVar20 = *(long *)(*plVar1 + 0xc0);
        lVar16 = *(long *)(lVar20 + 0x38);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01ecaf44();
          lVar20 = *(long *)(*plVar1 + 0xc0);
        }
        *(long *)(*(long *)(lVar16 + 0xb8) + 8) = lVar15;
        lVar16 = *(long *)(lVar20 + 0x38);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = FUN_01ecaf44();
        }
        thunk_FUN_01f51358(*(long *)(lVar16 + 0xb8) + 8,lVar15);
      }
      uVar25 = FUN_02300e64(lVar18,lVar15,
                            *(undefined8 *)Method_System_Linq_Enumerable_ThenBy<KerningPair,_uint>__
                           );
      uVar25 = FUN_02308ab0(uVar25,*(undefined8 *)
                                    Method_System_Linq_Enumerable_ThenBy<MarkToBaseAdjustmentRecord,_uint>__
                           );
      uVar23 = FUN_0340f714(uVar23,uVar25,0);
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x38) = uVar23;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x38),uVar23);
      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x40) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<CreepUnit>__;
      thunk_FUN_01f51358();
      if (plVar13 == (long *)0x0) goto LAB_032ad478;
      uVar23 = (**(code **)(*plVar13 + 0x2e8))(plVar13,*(undefined8 *)(*plVar13 + 0x2f0));
      if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x48) = uVar23;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar14 + 0x18) < 7) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x50) =
           **(undefined8 **)
             (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x50));
      if (*(uint *)(lVar14 + 0x18) < 8) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x58) =
           *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
    }
    else {
      lVar14 = FUN_01f08890(*(undefined8 *)
                             Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                            ,6);
      if (lVar14 == 0) goto LAB_032ad478;
      if (*(int *)(lVar14 + 0x18) == 0) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x20) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<HandSkeletonJoint>__;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x20));
      if (*(uint *)(lVar14 + 0x18) < 2) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x28) = 0;
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x28));
      if (*(uint *)(lVar14 + 0x18) < 3) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x30) =
           *(undefined8 *)Method_System_Linq_Enumerable_ToArray<InputControlAttribute>__;
      thunk_FUN_01f51358();
      if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar23 = FUN_0392f7cc(plVar13,0);
      if (*(uint *)(lVar14 + 0x18) < 4) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x38) = uVar23;
      thunk_FUN_01f51358();
      if (*(uint *)(lVar14 + 0x18) < 5) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x40) =
           **(undefined8 **)
             (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8);
      thunk_FUN_01f51358((undefined8 *)(lVar14 + 0x40));
      if (*(uint *)(lVar14 + 0x18) < 6) goto LAB_032ad47c;
      *(undefined8 *)(lVar14 + 0x48) =
           *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
    }
  }
  thunk_FUN_01f51358();
                    /* catch() { ... } // from try @ 032acba8 with catch @ 032acc2c
                       catch() { ... } // from try @ 032acc1c with catch @ 032acc2c */
                    /* try { // try from 032acc30 to 033acc33 has its CatchHandler @ 032acc3c */
  uVar23 = FUN_0340efe8(lVar14,0);
                    /* try { // try from 032acc34 to 033acc3f has its CatchHandler @ 032aca60 */
  if (lVar24 != 0) {
LAB_032acc40:
    FUN_0390b988(lVar24,uVar23,0);
    return;
  }
LAB_032ad478:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


