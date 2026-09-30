/*
FUNCTION_NAME: FUN_01c44e98
ENTRY_POINT: 01c44e98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1 FUN_01c44e98(undefined8 param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_5c [4];
  long local_58;
  
  if ((DAT_0377eab6 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_4901);
    thunk_FUN_00d48444(StringLiteral_9688);
    thunk_FUN_00d48444(PTR_DAT_033ea8a0);
    thunk_FUN_00d48444(UnityEngine_Rendering_LODParameters_TypeInfo);
    thunk_FUN_00d48444(Method_System_Tuple<TextWriter,_string>__ctor__);
                    /* try { // try from 01c44f00 to 01d44f07 has its CatchHandler @ 01c44f90 */
    thunk_FUN_00d48444(StringLiteral_12066);
                    /* try { // try from 01c44f10 to 01d44f1b has its CatchHandler @ 01c44f8c */
    thunk_FUN_00d48444(
                      Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                      );
    DAT_0377eab6 = 1;
  }
  puVar3 = StringLiteral_9688;
  local_58 = 0;
  local_5c[0] = 0;
                    /* try { // try from 01c44f24 to 01d44f2b has its CatchHandler @ 01c44f88 */
  if (param_2 != (long *)0x0) {
                    /* try { // try from 01c44f2c to 01d44fab has its CatchHandler @ 01c44de4 */
    lVar12 = *param_2;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_9688) {
          puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 0x10) * 0x10 + 0x138);
          goto LAB_01c44f80;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)StringLiteral_9688,0x10);
LAB_01c44f80:
    puVar5 = StringLiteral_4901;
    puVar4 = Method_System_Tuple<TextWriter,_string>__ctor__;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c44f24 with catch @ 01c44f88
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c44f10 with catch @ 01c44f8c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c44f00 with catch @ 01c44f90
                        */
    cVar6 = (*(code *)*puVar7)(param_2,&local_58,puVar7[1]);
    lVar13 = *param_2;
    lVar12 = *(long *)puVar3;
                    /* try { // try from 01c44fac to 01d44faf has its CatchHandler @ 01c44fd0 */
                    /* try { // try from 01c44fb0 to 01d44fd7 has its CatchHandler @ 01c44de4 */
    uVar1 = *(ushort *)(lVar13 + 0x12a);
    uVar14 = (ulong)uVar1;
    if (cVar6 == '\x03') {
      if (uVar1 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 0x18) * 0x10 + 0x138);
            goto LAB_01c45034;
          }
                    /* catch() { ... } // from try @ 01c44fac with catch @ 01c44fd0 */
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
                    /* try { // try from 01c44fd8 to 01d44fdf has its CatchHandler @ 01c44ff4 */
        } while (uVar14 != 0);
      }
                    /* try { // try from 01c44fe0 to 01d44feb has its CatchHandler @ 01c44de4 */
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar12,0x18);
LAB_01c45034:
      uVar14 = (*(code *)*puVar7)(param_2,local_5c,puVar7[1]);
      if ((uVar14 & 1) != 0) {
        return local_5c[0];
      }
      lVar12 = *param_2;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c452b8;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,8);
LAB_01c452b8:
      lVar12 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar12 != 0) &&
         (lVar12 = FUN_01c25128(), puVar3 = UnityEngine_Rendering_LODParameters_TypeInfo,
         lVar12 != 0)) {
        lVar13 = FUN_01c254c8();
        lVar12 = local_58;
        local_78 = *(undefined8 *)puVar5;
        uStack_70 = 0xffffffffffffffff;
        local_68 = 3;
        uVar10 = FUN_017a7f78(&local_78,0);
        uVar10 = FUN_0160073c(*(undefined8 *)puVar3,lVar12,*(undefined8 *)puVar4,uVar10,0);
        if (lVar13 != 0) {
          FUN_01c25764(lVar13,uVar10);
          return local_5c[0];
        }
      }
    }
    else {
                    /* try { // try from 01c44fec to 01d44ff3 has its CatchHandler @ 01c44ff4 */
      if (uVar1 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01c44fd8 with catch @ 01c44ff4
                       catch(type#2 @ 00000000) { ... } // from try @ 01c44fec with catch @ 01c44ff4
                        */
                    /* try { // try from 01c44ff8 to 01d450c7 has its CatchHandler @ 01c44ff8
                       catch() { ... } // from try @ 01c44ff8 with catch @ 01c44ff8
                       catch() { ... } // from try @ 01c45100 with catch @ 01c44ff8
                       catch() { ... } // from try @ 01c45174 with catch @ 01c44ff8
                       catch() { ... } // from try @ 01c451a4 with catch @ 01c44ff8 */
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)(*piVar15 + 8) * 0x10 + 0x138);
            goto LAB_01c45098;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_00d59724(param_2,lVar12,8);
LAB_01c45098:
      lVar12 = (*(code *)*puVar7)(param_2,puVar7[1]);
      if ((lVar12 != 0) && (lVar12 = FUN_01c25128(), puVar2 = PTR_DAT_033ea8a0, lVar12 != 0)) {
        lVar12 = FUN_01c254c8();
                    /* try { // try from 01c450c8 to 01d450cf has its CatchHandler @ 01c45154 */
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)puVar2,6);
        puVar2 = 
        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__;
        if (plVar8 != (long *)0x0) {
                    /* try { // try from 01c450d8 to 01d450ff has its CatchHandler @ 01c45158 */
          if ((*(long *)
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
               != 0) &&
             (lVar13 = thunk_FUN_00d6225c(*(long *)
                                           Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_ReadMetadataProperties__
                                          ,*(undefined8 *)(*plVar8 + 0x40)), lVar13 == 0)) {
LAB_01c45358:
            uVar10 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar10,0);
          }
          if ((int)plVar8[3] != 0) {
                    /* try { // try from 01c45100 to 01d4516f has its CatchHandler @ 01c44ff8 */
            plVar8[4] = *(long *)puVar2;
            local_78 = *(undefined8 *)puVar5;
            local_68 = 3;
            uStack_70 = 0xffffffffffffffff;
            lVar13 = FUN_017a7f78(&local_78,0);
            if ((lVar13 != 0) &&
               (lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
            goto LAB_01c45358;
            puVar2 = StringLiteral_12066;
            uVar11 = *(uint *)(plVar8 + 3);
            if (1 < uVar11) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c450c8 with catch @ 01c45154
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01c450d8 with catch @ 01c45158
                        */
              plVar8[5] = lVar13;
              lVar13 = *(long *)puVar2;
              if (lVar13 != 0) {
                lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40));
                    /* try { // try from 01c45170 to 01d45173 has its CatchHandler @ 01c45194 */
                if (lVar13 == 0) goto LAB_01c45358;
                    /* try { // try from 01c45174 to 01d4519b has its CatchHandler @ 01c44ff8 */
                uVar11 = *(uint *)(plVar8 + 3);
              }
              lVar13 = local_58;
              if (2 < uVar11) {
                plVar8[6] = *(long *)puVar2;
                if (local_58 != 0) {
                    /* catch() { ... } // from try @ 01c45170 with catch @ 01c45194 */
                    /* try { // try from 01c4519c to 01d451a3 has its CatchHandler @ 01c451b8 */
                  lVar9 = thunk_FUN_00d6225c(local_58,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar9 == 0) goto LAB_01c45358;
                    /* try { // try from 01c451a4 to 01d451af has its CatchHandler @ 01c44ff8 */
                  uVar11 = *(uint *)(plVar8 + 3);
                }
                if (3 < uVar11) {
                    /* try { // try from 01c451b0 to 01d451b7 has its CatchHandler @ 01c451b8 */
                  plVar8[7] = lVar13;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01c4519c with catch @ 01c451b8
                       catch(type#2 @ 00000000) { ... } // from try @ 01c451b0 with catch @ 01c451b8
                        */
                  if (*(long *)puVar4 != 0) {
                    lVar13 = thunk_FUN_00d6225c(*(long *)puVar4,*(undefined8 *)(*plVar8 + 0x40));
                    if (lVar13 == 0) goto LAB_01c45358;
                    uVar11 = *(uint *)(plVar8 + 3);
                  }
                  if (4 < uVar11) {
                    plVar8[8] = *(long *)puVar4;
                    local_90 = *(undefined8 *)puVar5;
                    uStack_88 = 0xffffffffffffffff;
                    local_80 = cVar6;
                    lVar13 = FUN_017a7f78(&local_90,0);
                    if ((lVar13 != 0) &&
                       (lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40)),
                       lVar9 == 0)) goto LAB_01c45358;
                    if (5 < *(uint *)(plVar8 + 3)) {
                      plVar8[9] = lVar13;
                      uVar10 = FUN_01600844(plVar8,0);
                      if (lVar12 != 0) {
                        FUN_01c25764(lVar12,uVar10);
                        lVar12 = *param_2;
                        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12a);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar15 + -2) == *(long *)puVar3) {
                              puVar7 = (undefined8 *)
                                       (lVar12 + (long)(*piVar15 + 0x25) * 0x10 + 0x138);
                              goto LAB_01c45294;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar7 = (undefined8 *)FUN_00d59724(param_2,*(long *)puVar3,0x25);
LAB_01c45294:
                        (*(code *)*puVar7)(param_2,puVar7[1]);
                        return 0;
                      }
                      goto LAB_01c45350;
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
      }
    }
  }
LAB_01c45350:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


