/*
FUNCTION_NAME: FUN_01ce0bc8
ENTRY_POINT: 01ce0bc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_01ce0bc8(long param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  
                    /* try { // try from 01ce0bcc to 01de0c07 has its CatchHandler @ 01ce09c8 */
  if ((DAT_0377f0aa & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3328);
                    /* try { // try from 01ce0c08 to 01de0c0b has its CatchHandler @ 01ce0c18 */
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<TMP_SpriteGlyph>__);
                    /* try { // try from 01ce0c0c to 01de0c0f has its CatchHandler @ 01ce0c14 */
                    /* try { // try from 01ce0c10 to 01de0c3f has its CatchHandler @ 01ce09c8 */
    DAT_0377f0aa = 1;
  }
  puVar1 = PTR_DAT_033f3328;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0c0c with catch @ 01ce0c14
                        */
  if (param_2 != (long *)0x0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0c08 with catch @ 01ce0c18
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0b88 with catch @ 01ce0c1c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0b6c with catch @ 01ce0c20
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0b5c with catch @ 01ce0c24
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 01ce0b98 with catch @ 01ce0c28
                        */
    bVar2 = *(byte *)(*(long *)
                       System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
                     + 300);
                    /* try { // try from 01ce0c40 to 01de0c43 has its CatchHandler @ 01ce0c6c */
                    /* try { // try from 01ce0c44 to 01de0c7b has its CatchHandler @ 01ce09c8 */
    if ((*(byte *)(*param_2 + 300) < bVar2) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)System_Collections_Generic_IEnumerator<OVRPermissionsRequester_Permission>_TypeInfo
       )) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(param_2);
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar3 = FUN_01cccf5c();
                    /* catch() { ... } // from try @ 01ce0c40 with catch @ 01ce0c6c */
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
                    /* try { // try from 01ce0c7c to 01de0c83 has its CatchHandler @ 01ce0c98 */
      FUN_017b46ec(lVar4,0);
      *(undefined4 *)(lVar4 + 0x18) = uVar3;
                    /* try { // try from 01ce0c84 to 01de0c8f has its CatchHandler @ 01ce09c8 */
      if ((param_2 != (long *)0x0) && (param_2[2] != 0)) {
                    /* try { // try from 01ce0c90 to 01de0c97 has its CatchHandler @ 01ce0c98 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01ce0c7c with catch @ 01ce0c98
                       catch(type#2 @ 00000000) { ... } // from try @ 01ce0c90 with catch @ 01ce0c98
                        */
        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(param_2[2] + 0x10);
        uVar3 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
        *(undefined4 *)(lVar4 + 0x10) = uVar3;
        uVar3 = (**(code **)(*param_2 + 0x1e8))(param_2,*(undefined8 *)(*param_2 + 0x1f0));
        *(undefined4 *)(lVar4 + 0x14) = uVar3;
        bVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,*(undefined8 *)(*param_2 + 0x200));
        *(byte *)(lVar4 + 0x28) = bVar2 & 1;
        if (*(long *)(param_1 + 0x20) != 0) {
          FUN_00c3e8dc(*(long *)(param_1 + 0x20),lVar4,
                       *(undefined8 *)Method_System_Linq_Enumerable_ToList<TMP_SpriteGlyph>__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


